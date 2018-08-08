/*#include <stdio.h>

void selection_sort(int[]);

int main()
{
	int data[] = { 20,1,50,55,34,21,4,66,71,8 };
	int i;

	printf(" **** 소트되기 전의 데이타 출력 ****\n");
	for (i = 0; i<10; i++)
		printf("%3d", data[i]);
	printf("\n");


	selection_sort(data);

	printf(" **** 소트된 후의 데이타 출력 ****\n");
	for (i = 0; i<10; i++)
		printf("%3d", data[i]);
	printf("\n");
}

void selection_sort(int *d)
{
	int i, j, t, min;
	for (i = 0; i<9; i++)
	{
		min = i;
		for (j = i + 1; j<10; j++)
		{
			if (d[min]>d[j]) min = j;
		}
		t = d[i];
		d[i] = d[min];
		d[min] = t;
	}
}
*/