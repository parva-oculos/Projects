# include <stdio.h>

int main()
{
	int a, b, i;
	printf("���ڸ� �Է��� �ּ��� : ");
	scanf_s("%d", &a);
	i = 1;
	while (i <= 19)
	{
		b = (a * i);
		printf("%d * %d = %d \n", a, i, b);
		i++;
	}
	return 0;
}