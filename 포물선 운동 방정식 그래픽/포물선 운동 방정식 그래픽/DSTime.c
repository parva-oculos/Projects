//선택정렬 수행 시간 측정 
#include<stdio.h>
#include<time.h>

#define MAX_SIZE 10001
#define ITERATIONS 9
#define SWAP(x,y,t)((t)=(x),(x)=(y),(y)=(t))
void sort();

int main(void)
{
	int i, j, position;
	int list[MAX_SIZE];
	// 반복 횟수 데이터 
	int sizelist[] = { 10,100,1000,2000,3000,4000,5000,6000,10000 };
	clock_t start, stop;
	double duration;
	printf("   오래 기다렸습니다....... \n");
	printf("   (n)           (time) \n");
	for (i = 0; i<ITERATIONS; i++) {
		for (j = 0; j<sizelist[i]; j++)
			list[j] = sizelist[i] - j;
		start = clock();
		sort(list, sizelist[i]);
		stop = clock();
		// CLK_TCK= 
		duration = ((double)(stop - start)) / CLK_TCK;
		printf(" n = %6d, time = %8.2f\n", sizelist[i], duration);
	}
}

void sort(int list[], int n)
{
	int i, j, min, temp;
	for (i = 0; i<n - 1; i++) {
		min = i;
		for (j = i + 1; j<n; j++)
			if (list[j]<list[min])
				min = j;
		SWAP(list[i], list[min], temp);
	}
}