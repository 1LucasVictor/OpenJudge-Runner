#include<stdio.h>

int stack[10];
int stackLength = 0;

void push(int number) {
	stack[stackLength++] = number;
}

int pop() {
	return stack[--stackLength];
}

int main () {
	int number;
	while(scanf("%d" , &number) > 0) {
		if (number > 0) {
			push(number);
		} else {
			printf("%d\n" , pop());
		}
	}
	return 0;
}