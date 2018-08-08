# include <stdio.h>

int main()
{
	int a, i, j, k;
	printf("양의 정수를 1개 입력하시오 : ");
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
	printf("홀수 정수의 합 : %d \n", j);
	printf("짝수 정수의 합 : %d \n", k);
	return 0;
}