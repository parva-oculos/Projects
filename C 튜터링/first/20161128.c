# include <stdio.h>

void gugudan(int a)
{
	int i;
	for (i = 1; i < 10; i++)
	{
		int b;
		b = a * i;
		printf("%d * %d = %d \n", a, i, b);
	}
}
int main()
{
	int a;
	printf("정수를 입력하시오 : ");
	scanf_s("%d", &a);
	gugudan(a);
	return 0;
}