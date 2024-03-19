#include <stdio.h>

int stack[1000];
int last;

void pop(void)
{
	last--;
}

void push(int x)
{
	stack[last] = x;
	last++;
}

int top(void)
{
	return (stack[last - 1]);
}


int main(void)
{
	char n;
	int  a, b, x;
	
	while (scanf("%c", &n) == 1){
		if (n >= '0' && n <= '9'){
			x = n - '0';
			push(x);
		}
		
		switch (n){
			case '+':
				stack[last - 2] += stack[last - 1];
				pop();
				break;
			case '-':
				stack[last - 2] -= stack[last - 1];
				pop();
				break;
			case '*':
				stack[last - 2] *= stack[last - 1];
				pop();
				break;
			case '/':
				stack[last - 2] /= stack[last - 1];
				break;
		}
	}
	
	printf("%d\n", top());
	
	return (0);
}