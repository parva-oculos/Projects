#include <stdio.h>
#include <math.h>//�ﰢ�Լ� �������
int main()
{
	double v = 0, a = 0, T = 0, x = 0, y = 0, g = 9.8;
	//v �ӵ� a ���� T �ð� x x�� �ʱⰪ y y�� �ʱⰪ g �߷°��ӵ�
	double t = 0;
	printf("�ʱ�ӵ� v(m/s), �ʱⰢ�� a(rad), �ð� t(s), �ʱ� ��ǥ x�� y�� �Է����ּ���\n");
	scanf_s("%lf %lf %lf %lf %lf", v, a, T, x, y);
	double X, Y;
	for (t = 0; t = T; t += 1)
	{
		X = v*cos(a)*t;
		Y = v*sin(a)*t - g*(t*t) / 2;
		printf("x�� ��ǥ '%lf' y�� ��ǥ '%lf' �Դϴ�.\n", X, Y);
	}
	return 0;
}