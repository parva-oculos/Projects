# include <stdio.h>

int main()
{
	int a, b;
	printf("���� 2���� �Է��Ͻÿ� : ");
	scanf_s("%d %d", &a, &b);
	int c = 0;
	int i = 1;
	while ( a*b*i <= 500)
	{
		c = c + (a + b)*i;
		i++;
	}

	printf("1~500������ ���� �� �Է��� �� ���� ������� ���� : %d\n", c);
	return 0;
}