# include <stdio.h>

int main()
{
	int a, b, i;
	printf("숫자를 입력해 주세요 : ");
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