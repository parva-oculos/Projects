# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>
# include <math.h>
# include <stdlib.h>
# include <time.h>
//���� ���߿� ���������(�� ������ü �Ǵ� ġ��ó�� ������ �ո� ����ü�� ��������...
int main()
{
	double x = 0, y = 0, z = 0;
	int r = 0, i = 0;
	FILE*Moon;
	Moon = fopen("C:\\Moon\\Moon2.txt", "wt");
	printf("���� ������ r�� �Է����ּ���. \n");
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