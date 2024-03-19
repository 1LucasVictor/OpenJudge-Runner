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
	int n, out[20], co=0;
	cp = 0;
	
	while (scanf("%d", &n) != EOF) {
		
		if (n == 0) {
			if (cp == 0) break;
			out[co++] = pop();
		} else {
			push(n);
		}
		if (cp == 0) break;
	}
	
	for (cp=0;cp < co; cp++) {
		printf("%d\n", out[cp]);
	}
	return 0;
}