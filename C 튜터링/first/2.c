# include <stdio.h>

int main()
{
	double a,b,result;
	printf("숫자 두개 입력하세요\n");
	scanf_s("%lf %lf",&a,&b);
	result = a*b;
	printf("%lf*%lf=%lf\n",a,b,result);
	printf("%lf/%lf=%lf\n", a, b, a / b);
	//%d는 정수형 변수 불러오기 %lf는 실수형 변수 불러오기//
	//int는 4바이트 double은 8바이트 char는 1바이트//
	//1바이트는 8비트//
	//unsigned : 음수크기만큼 양수로 땡겨쓰기//
	//&연산자 : 주소 불러오기//
	//scanf 에는 \n 꼭쓰기//

}