# define _CRT_SECURE_NO_WARNINGS    // 보안 씹어주는 행
# include <stdio.h>
# include <math.h>
# include <stdlib.h>
# include <time.h>
# include <Windows.h>

double gaussianRandom(void);   // GaussianRandom함수 선행처리

int main()
{
	double a = 0, b = 0, c = 0;

	double xi = 0, yi = 0, xf = 0, yf = 0, pxi = 0, pyi = 0, pxf = 0, pyf = 0;
	double qi = 0, qf = 0, qqf = 0, qqi = 0;
	double m = 1, t = 0.01, D = 1;
	double T = 0;
	int i = 0;
	double arr[3000] = { 0, };
	double brr[3000] = { 0, };
	double crr[3000] = { 0, };
	FILE*Moon;
	Moon = fopen("C:\\Moon\\Moon12-1.txt", "wt");
	srand((unsigned)time(NULL));        // rand함수 선행
	for (T = 0; T < 30; T += t)
	{

		arr[i] = gaussianRandom();		//x방향의 크사이힘 
		a = arr[i];

		brr[i] = gaussianRandom();		//y방향의 크사이힘
		b = brr[i];

		xf = xi + (pxf / m)*t;
		yf = yi + (pyf / m)*t;

		pxf = pxi - (xf*t) - ((pxi * t) / m) + sqrt(2 * t)*a;
		pyf = pyi - (yf*t) - ((pyi * t) / m) + sqrt(2 * t)*b;

		qf = (((pxi*pxi) + (pyi*pyi)) / (m*m))*t - ((sqrt(2 * t * D * t) * sqrt(a*a + b*b) * (a * pxi + b * pyi)) / m);

		xi = xf;
		yi = yf;

		pxi = pxf;
		pyi = pyf;

		crr[i] = qf;
		
		if ((i % 3) == 0)
		{
			c = (crr[i - 2] + crr[i - 1] + crr[i]);
			printf("%lf, %lf\n", T, c / T);
			fprintf(Moon, "%lf, %lf\n", T, c / T);
		}

		i++;
	}
}
		/*printf("%lf, %lf\n", T, qf/T);
		fprintf(Moon, "%lf, %lf\n", T, qf/T);*/
		/*printf("%lf, %lf, %lf\n", xf, yf, qf);
		fprintf(Moon, "%lf, %lf, %lf\n", xf, yf, qf);

		- 2*yf*t
		+ 2*xf*t*/



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