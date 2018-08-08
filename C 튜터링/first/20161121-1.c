# include <stdio.h>

int main()
{
	int a, b, i;
	for (a=1; a<=9; a++)
	{
		for (i = 1; i <= 9; i++)
		{
			b = a*i;
			printf("%d * %d = %d \n", a, i, b);
		}
		printf("---------- \n");
	}
	return 0;
}