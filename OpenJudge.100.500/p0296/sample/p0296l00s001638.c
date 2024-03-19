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
	char n[1000000];
	int  a, b, x, i;
	
	while (scanf("%s", n) == 1){
		x = 0;
		switch (n[0]){
			case '+':
				a = top();
				pop();
				b = top();
				pop();
				push(a + b);
				break;
			
			case '-':
				a = top();
				pop();
				b = top();
				pop();
				push(b - a);
				break;
			case '*':
				a = top();
				pop();
				b = top();
				pop();
				push(b * a);
				break;
		}
		if (n[0] > '0' && n[0] <= '9'){
			for (i = 0; n[i] != '\0'; i++){
				x = x * 10 + n[i] - '0';
			}
			push(x);
		}
	}
	
	printf("%d\n", top());
	
	return (0);
}