# include <stdio.h>

int main()
{
	int a, b;
	printf("정수 2개를 입력하시오 : ");
	scanf_s("%d %d", &a, &b);
	int c = 0;
	int i = 1;
	while ( a*b*i <= 500)
	{
		c = c + (a + b)*i;
		i++;
	}

	printf("1~500사이의 정수 중 입력한 두 수의 배수들의 총합 : %d\n", c);
	return 0;
}