/*#include <stdio.h>
#define MAX_STACK_SIZE 100
int stack[MAX_STACK_SIZE];
int top = -1;

void push(int item)
{
	if (top >= MAX_STACK_SIZE - 1) {
		printf("stack_full()\n");
		return;
	}
	stack[++top] = item;
}

int pop() {
	if (top == -1)
	{
		printf("stack_empty()\n"); exit();
	}
	return stack[(top)--];
}

int isempty()
{
	if (top == -1) return(1); else return(0);
}

int isfull()
{
	if (top >= MAX_STACK_SIZE - 1) return(1); else return(0);
}

int main()
{
	int e;
	push(20);
	push(40);
	push(60);
	printf(" Begin Stack Test ...\n");
	while (!isempty())
	{
		e = pop();
		printf("value = %d\n", e);
	}
}