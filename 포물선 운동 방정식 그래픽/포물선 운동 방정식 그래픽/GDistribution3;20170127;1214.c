# define _CRT_SECURE_NO_WARNINGS    // 보안 씹어주는 행
# include <stdio.h>
# include <math.h>
# include <stdlib.h>
# include <time.h>
# include <Windows.h>

double gaussianRandom(void);   // GaussianRandom함수 선행처리

int main()
{
	double a = 0;
	int i, j, k;
	double xm = 0, ym = 0, xM = 0, yM = 0, xmd = 0, ymd = 0;
	double arr[5000] = { 0, };
	double count = 0;

	FILE*Moon;
	Moon = fopen("C:\\Moon\\Moon4.txt", "wt");

	srand((unsigned)time(NULL));        // rand함수 선행



		for (j = 0; j < 79; j++)
		{
			
			xm = -4 + 0.1*j;
			xM = -4 + ((j+1)*0.1);
			xmd = (xM + xm) / 2;
				for (k = 0; k < 79; k += 1)
				{
					ym = -4 + 0.1*k;
					yM = -4 + ((k+1)*0.1);
					ymd = (yM + ym) / 2;

					for (i = 0; i < 1000; i += 1)      // 5000번 랜덤 찍기
					{
						a = gaussianRandom();
						arr[i] = a;
								  	if (xm <= arr[i] && arr[i] < xM && ym <= arr[i] && arr[i] < yM)
										count++;

									printf("%lf, %lf, %lf \n", xmd, ymd, count);
									fprintf(Moon, "%lf, %lf, %lf \n", xmd, ymd, count);
			

				}

		
			
		}
		
				count = 0;

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