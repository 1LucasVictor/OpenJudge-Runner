#include <stdio.h>

int stack[50], cp;

void push(int n)
{
	stack[cp] = n;
	cp++;
}

int pop(void)
{
	cp--;
	if (cp != -1) return stack[cp];
	return -1;
}

int main(void)
{
	int n;
	cp = 0;
	
	while (scanf("%d", &n) != EOF) {
		
		if (n == 0) {
			int num = pop();
			if (num == -1) return 0;
			printf("%d\n", num);
		} else {
			push(n);
		}
		
		if (cp == 0)break;
	}
	
	return 0;
}