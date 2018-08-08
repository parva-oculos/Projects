# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>
# include <math.h>
# include <stdlib.h>
# include <time.h>
//보류 나중에 여쭤봐야함(왜 정육면체 또는 치즈처럼 구멍이 뚫린 육면체가 나오는지...
int main()
{
	double x = 0, y = 0, z = 0;
	int r = 0, i = 0;
	FILE*Moon;
	Moon = fopen("C:\\Moon\\Moon2.txt", "wt");
	printf("구의 반지름 r을 입력해주세요. \n");
	scanf_s("%d", &r);
	srand((unsigned)time(NULL));
	for(i=0;i<5000;i+=1)
	{
		x = (rand() % r/2 + 0.001) - r / 4;
		y = (rand() % r/2 + 0.001) - r / 4;
		z = (rand() % r/2 + 0.001) - r / 4;
		if (sqrt(x*x+y*y+z*z) < r)
			{
				printf("%lf %lf %lf \n", x, y, z);
				fprintf(Moon, "%lf %lf %lf \n", x, y, z);
			}
	}
	return 0;
}