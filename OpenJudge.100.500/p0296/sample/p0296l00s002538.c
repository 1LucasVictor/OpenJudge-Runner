#include <stdio.h>
#include <ctype.h>
#define SIZE 200

void push(int);
int pop(void);

int top = 0;
int s[SIZE];

int main(void){
	int c, a, op1, op2;
	while((c = getchar()) != EOF){
		if(isdigit(c)){
			ungetc(c, stdin);
			scanf("%d", &a);
			push(a);
		}else{
			switch(c){
			case '+':
					op2 = pop();
					op1 = pop();
					push(op1 + op2);
					break;
			case '*':
					op2 = pop();
					op1 = pop();
					push(op1 * op2);
					break;
			case '-':
					op2 = pop();
					op1 = pop();
					push(op1 - op2);
					break;
			case '\n':
					printf("%d\n", pop());
					break;
			case ' ':
					break;
			default:
					break;
			}
		}
	}

	return 0;
}

void push(int x){
	if(top < SIZE){
		top++;
		s[top] = x;
	}else{
		printf("error: Stack full\n");
	}
}

int pop(void){
	if(top > 0){
		top--;
		return s[top + 1];
	}else{
		printf("error: Stack empty\n");
	}
}