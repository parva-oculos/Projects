# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main()
{
	int arr1[2][2] = { { 1, 2 }, { 3, 1 } };
	int arr2[2][2] = { { 0, 3 }, { 1, 1 } };
	int arr3[2][2] = {0,};
	int x = 0, y = 0, z = 0, w = 0;
	for (x = 0; x < 2; x++)
	{
		for (y = 0; y < 2; y++)
		{
			for (z = 0; z < 2; z++)
			{
				w = arr1[x][y] * arr2[y][z];
				arr3[x][z] += w;
			}
		}
	}
	printf("-행렬곱연산-\n");
	printf("행렬 a*b\n");
	for (x = 0; x < 2; x++)
	{
		printf("[");
		for (z = 0; z < 2; z++)
		{
			printf("%d", arr3[x][z]);
		}
		printf("] \n");
	}
	return 0;
}