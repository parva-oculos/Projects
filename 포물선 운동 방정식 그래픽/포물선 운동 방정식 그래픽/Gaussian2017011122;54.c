# define _CRT_SECURE_NO_WARNINGS    // 보안 씹어주는 행
# include <stdio.h>
# include <math.h>
# include <stdlib.h>
# include <time.h>
# include <Windows.h>

double gaussianRandom(void);   // GaussianRandom함수 선행처리

int main()
{
	double a=0;

	int i;


	FILE*Moon;
	Moon = fopen("C:\\Moon\\Moon3.txt", "wt");

	srand((unsigned)time(NULL));        // rand함수 선행
	
	for (i = 0; i < 5000; i += 1)      // 5000번 랜덤 찍기
		{
			a = gaussianRandom();
			printf("%lf \n", a);
			fprintf(Moon, "%lf \n", a);

		}
	
	
	return 0;

}

double gaussianRandom(void)
{
	double v1, v2, s;

	do
		{
			v1 = 2 * ((double)rand() / RAND_MAX) - 1;      // -1.0 ~ 1seq2.0 까지의 값
			v2 = 2 * ((double)rand() / RAND_MAX) - 1;      // -1.0 ~ 1.0 까지의 값
			s = v1 * v1 + v2 * v2;
		}

	while (s >= 1 || s == 0);

	s = sqrt((-2 * log(s)) / s);

	return v1 * s;
}