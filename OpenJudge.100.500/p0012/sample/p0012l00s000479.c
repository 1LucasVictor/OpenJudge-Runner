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
	return stack[cp];
}

int main(void)
{
	int n;
	cp = 0;
	
	while (scanf("%d", &n) != EOF) {
		
		if (n == 0) {
			if (cp == 0) break;
			printf("%d\n", pop());
		} else {
			push(n);
		}
		if (cp == 0) break;
	}
	
	return 0;
}