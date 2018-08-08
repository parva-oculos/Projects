# include <stdio.h>

int main()
{
	double Word, Math, Eng, Ave;
	printf("[국어, 영어, 수학]순으로 점수를 입력하시오 : ");
	scanf_s("%lf %lf %lf", &Word , &Eng , &Math);
	Ave = (Word + Math + Eng) / 3;
	if (Ave >= 60)
	{
		printf("합격입니다!\n");
	}
	else
	{
		printf("불합격입니다!\n");
	}
	return 0;
}