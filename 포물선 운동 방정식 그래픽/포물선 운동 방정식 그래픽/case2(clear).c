# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>
# include <math.h>
int main()
{
	double v = 0, r = 0, t = 0, i = 0, xi = 0, yi = 0;
	printf("초기속도 v, 초기각도 r, 전체 시간 t를 입력해 주세요 \n");
	scanf_s("%lf %lf %lf", &v, &r, &t);
	double xf = 0, yf = 0;
	FILE*Moon;
	Moon = fopen("C:\\Moon\\Moon1.txt", "wt");
	for (i = 0; i < t; i += 0.01)
	{
		xf = xi + v*i*cos(r);
		yf = yi + v*sin(r)*i - ((9.8*i*i) / 2);
		if (yf >= 0)
		{
			fprintf(Moon, "%lf %lf \n", xf, yf);
		}
		xi = xf;
		yi = yf;
	}
	return 0;
}