# define _CRT_SECURE_NO_WARNINGS    // ���� �þ��ִ� ��
# include <stdio.h>
# include <math.h>
# include <stdlib.h>
# include <time.h>
# include <Windows.h>


double gaussianRandom(void);   // GaussianRandom�Լ� ����ó��

int main()
{
	double a = 0;

	int i, j;
	double arr[5000] = { 0, };
	double brr[800] = { 0, };

	FILE*Moon;
	Moon = fopen("C:\\Moon\\Moon5.txt", "wt");

	srand((unsigned)time(NULL));        // rand�Լ� ����

	
	for (j = 0; j < 799; j++)
	{
		for (i = 0; i < 50000; i += 1)      // 5000�� ���� ���
		{
				arr[i] = gaussianRandom();
				a = arr[i];
			if (a > -4 + 0.01*j && -4 + 0.01*(j + 1) > a)
			{
				brr[j] += 1;
			}
		}

		printf("%lf, %lf \n", -4 + 0.01*j, (brr[j]));
		fprintf(Moon, "%lf, %lf \n", -4 + 0.01*j, (brr[j]));
		brr[j] = 0;
	}
	
	return 0;

}

double gaussianRandom(void)
{
	double v1, v2, s;

	do
	{
		v1 = 2 * ((double)rand() / RAND_MAX) - 1;      // -1.0 ~ 1seq2.0 ������ ��
		v2 = 2 * ((double)rand() / RAND_MAX) - 1;      // -1.0 ~ 1.0 ������ ��
		s = v1 * v1 + v2 * v2;
	}

	while (s >= 1 || s == 0);

	s = sqrt((-2 * log(s)) / s);

	return v1 * s;
}