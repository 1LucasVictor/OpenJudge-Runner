#include<stdio.h>
#define limit 256

int array[limit], size = 0;

void push(int n) {
	array[size++] = n;
}

int pop() {
	return array[--size];
}

int main() {
	char input;
	int num = -1;
	while (scanf("%c", &input) != EOF) {

		//convert string into int
		if ('0' <= input && input <= '9') {
			num = (num < 0 ? input - '0' : 10 * num + input - '0');
		}

		//push to array
		if (input == ' ') {
			if (num >= 0) push(num);
			num = -1;
		}

		if (input == '+') {
			push(pop() + pop());
		}

		if (input == '-') {
			int a = pop(), b = pop();
			push(b - a);
		}

		if (input == '*') {
			push(pop() * pop());
		}
	}
	printf("%d\n", pop());
	return 0;
}
