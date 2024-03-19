#include <stdio.h>

int stack[10];
int size=0;

void push(int);
int pop(void);

int main(){
	int x;
	while(scanf("%d", &x) != EOF){
		if(x == 0){
			printf("%d\n", pop());
		}else {
			push(x);
		}
	}

	return 0;
}

void push(int x){
	stack[size++] = x;
}

int pop(void){
	return stack[--size];
}