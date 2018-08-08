# define _CRT_SECURE_NO_WARNINGS    // 보안 씹어주는 행
# include <stdio.h>
# include <math.h>
# include <stdlib.h>
# include <time.h>
# include <Windows.h>

double gaussianRandom(void);   // GaussianRandom함수 선행처리

int main()
{
	double a = 0, b = 0;

	double xi = 0, yi = 0, xf = 0, yf = 0, pxi = 0, pyi = 0, pxf = 0, pyf = 0;
	double m = 1, t = 0.1;
	int i;
	double arr[5000] = { 0, };
	double brr[5000] = { 0, };
	FILE*Moon;
	Moon = fopen("C:\\Moon\\Moon11.txt", "wt");

	srand((unsigned)time(NULL));        // rand함수 선행

	for (i = 0; i < 5000; i += 1)      // 500000번 랜덤 찍기
	{
		arr[i] = gaussianRandom();
		a = arr[i];

		xf = xi + (pxf / m)*t;

		pxf = pxi - (xf*t) - 2 * yf*t - (pxi / m) + sqrt(2)*a;

		qf = qi + (sqrt((pxf*pxf) + ) / (m*m))*t - ((sqrt(2 * t*D)*(a*pxf + b*pyf)) / m);

		xi = xf;

		pxi = pxf;
		printf("%lf, %lf\n", sqrt(xf*xf + yf*yf), sqrt(pxf*pxf + pyf*pyf));
		fprintf(Moon, "%lf, %lf\n", sqrt(xf*xf + yf*yf), sqrt(pxf*pxf + pyf*pyf));
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