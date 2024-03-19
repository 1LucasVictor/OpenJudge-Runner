#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>
#define MAX 200

int top = 0;
char stk[1];
int stack[MAX];

bool isEmpty(){
	if (top == 0)
		return true;
	return false;	
}

bool isFull(){
	if(top >= MAX-1)
		return true;
	return false;
}

void push(int s[], int x){
	if (isFull())
		printf("overflow");
	else{
		top++;
		s[top] = x;
	}
	
}

int pop(int s[]){
	if (isEmpty())
		printf("underflow");
	else{
		top--;
		return s[top+1];
	}
}

int main(void) {
	int x, y, result;

	while(scanf("%s", stk) != EOF){
		if (stk[0] == '+'){
			x = pop(stack);
			y = pop(stack);
			
			result = x + y;
			push(stack, result);
			
			
		}else if(stk[0] == '-'){
			x = pop(stack);
			y = pop(stack);
			
			result = y - x;
			push(stack,result);
			
		}else if(stk[0] == '*'){
			x = pop(stack);
			y = pop(stack);

			result = x * y;
			push(stack,result);
		}else{
			x = atoi(stk);
			push(stack,x);
		}
	}
	printf("%d\n", result);

	return 0;
}

