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

	double xi = 0, yi = 0, xf = 0, yf = 0, pxi = 0, pyi = 0, pxf = 0, pyf = 0;
	double m = 1, two = 2;
	double t = 0.1;
	int i;
	double arr[500000] = { 0, };
	FILE*Moon;
	Moon = fopen("C:\\Moon\\Moon5.txt", "wt");

	srand((unsigned)time(NULL));        // rand함수 선행

	for (i = 0; i < 499999; i += 1)      // 500000번 랜덤 찍기
	{
		arr[i] = gaussianRandom();
		a = arr[i];
		xf = xi + (pxi / m)*t;
		yf = yi + (pyi / m)*t;
		pxf = pxi - (xi*t) - (pxi / m) + (sqrt(two)*a);
		pyf = pyi - (yi*t) - (pyi / m) + (sqrt(two)*a);
		xi = xf;
		yi = yf;
		pxi = pxf;
		pyi = pyf;
		printf("%lf, %lf\n", pxf, pyf);
		fprintf(Moon, "%lf, %lf\n", pxf, pyf);
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