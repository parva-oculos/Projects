#include <stdio.h>

int binsearch(int list[], int searchnum, int left, int right)
{
	//searchnum에 대해 list[0]<=list[1] ... list[n-1]을 탐색. 찾으면 그 위치를 반환 / 못찾으면 -1 반환
	int middle;
	while (left <= right) {
		middle = (left + right) / 2;
		//printf("%d %d %d %d \n", left ,right, middle, searchnum);
		if (list[middle] > searchnum)
			left = middle + 1;
		else if (list[middle] > searchnum)
			right = middle - 1;
		else if (list[middle] = searchnum)
			return middle;
	}
	return -1;
}

//main program
int main()
{
	int data[16] = { 12,23,25,34,45,46,57,58,69,72,75,82,86,89,97,99 };
	int found;
	found = binsearch(data, 34, 0, 15);//34를 찾는다
	if (found == -1)
	{
		printf(" Not Found \n");
	}
	else {
		printf("* it's at %d !\n", found);
	}
}