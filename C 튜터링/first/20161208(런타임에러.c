#include <stdio.h>

int main()
{
	int i, k;
	int arr[5];
		
	for (i = 0; i <= 5; i++)
		{
		k=i;
		arr[k]=10*(k+1);
		}
	for (i = 0; i < 5; i++)
		{
		printf("arr[%d]=%d\n",i,arr[i]);
		}
	return 0;
}