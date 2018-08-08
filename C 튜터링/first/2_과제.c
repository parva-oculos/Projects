# include <stdio.h>

int main()
{
	int num;
	printf("정수를 입력하시오 : ");
	scanf_s("%d", &num);
	ㅑf (num >= 0)
	{
		num = num;
	}
	else
	{
		num = -num;
	}
	printf("입력한 수의 절대값은 %d", num);
	return 0;
	//"||" or 게이트 ==은 이거냐? 라는 뜻(판정에서 씀)
	//"&&" and 게이트 1=은 다르냐? 라는 뜻
	//e.g. (num%3==0||num%5==0)
	//e.g. if(num%3==0&&num%5==0)
}
