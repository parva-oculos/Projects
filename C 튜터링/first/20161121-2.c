# include <stdio.h>

int main()
{
	int a, i, j, k;
	printf("���� ������ 1�� �Է��Ͻÿ� : ");
	scanf_s("%d", &a);
	k = 0;
	j = 0;
	for (i = 0; i < a+1; i++)
	{
		if (i % 2 == 0)
		{
			k += i;
		}
		else
		{
			j += i;
		}
	}
	printf("Ȧ�� ������ �� : %d \n", j);
	printf("¦�� ������ �� : %d \n", k);
	return 0;
}