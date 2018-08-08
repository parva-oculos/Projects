#include <stdio.h>
#include <math.h>//삼각함수 헤더파일
int main()
{
	double v = 0, a = 0, T = 0, x = 0, y = 0, g = 9.8;
	//v 속도 a 각도 T 시간 x x축 초기값 y y축 초기값 g 중력가속도
	double t = 0;
	printf("초기속도 v(m/s), 초기각도 a(rad), 시간 t(s), 초기 좌표 x와 y를 입력해주세요\n");
	scanf_s("%lf %lf %lf %lf %lf", v, a, T, x, y);
	double X, Y;
	for (t = 0; t = T; t += 1)
	{
		X = v*cos(a)*t;
		Y = v*sin(a)*t - g*(t*t) / 2;
		printf("x축 좌표 '%lf' y축 좌표 '%lf' 입니다.\n", X, Y);
	}
	return 0;
}