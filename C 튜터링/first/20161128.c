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
	printf("������ �Է��Ͻÿ� : ");
	scanf_s("%d", &a);
	gugudan(a);
	return 0;
}