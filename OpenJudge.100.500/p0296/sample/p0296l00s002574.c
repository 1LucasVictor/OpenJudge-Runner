#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#define N 200

int A[N];
int top;

void initialize(){
	top = 0;
}

int isEmpty(){
	return top == 0;
}

int isFull(){
	return top >= N-1;
}

void push(int a){
	if(isFull()){
		printf("error\n");
	}else{
		top++;
		A[top] = a;
	}
}

char pop(){
	if(isEmpty()){
		printf("error\n");
	}else{
		top--;
		return A[top+1];
	}
}

int main(){
	char c;
	int x;
	int tmp;

	while ((c=getchar())!=EOF){
                if (isdigit(c)){
                        ungetc(c, stdin);
                        scanf("%d", &x);
                        push(x);
                }
                else{
                    switch(c) {
                        case '+':
                        	push(pop()+pop());
                            break;
                        case '-':
                        	tmp = pop();
							push(pop() - tmp);
							break;
                        case '*':
                        	push(pop()*pop());
                        	break;
                        case ' ':
                        	break;
                        case '\n':
                        	break;
                        default:
                        	printf("no input\n");
                        	break;
                    }
                }
    }

	printf("%d\n",pop());
}