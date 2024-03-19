#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100;
int top;
char S[100];

void initialize() {
	top = 0;
}
int isEmpty() {
	return top == 0;

}
int isFull() {
	return top > MAX;
}
void push(int x) {
	if (isFull()){
		printf("満杯です");
	return;
	}
	top++;
	S[top] = x;
}
int pop() {
	if (isEmpty()) {
		printf("これ以上取り除けません");
		return NULL;
	}
	top--;
	return	S[top + 1];
}

int main() {
	int i = 0;
	char str[1300],*cn;
	initialize();
	fgets(str, sizeof(str), stdin);	//get関数は最後に\n　\0を作る。
	cn = strtok(str," ");
	
	while (cn != NULL) {
	
		if (strcmp(cn,"+") == 0 || strcmp(cn,"+\n") == 0) {
			
			int x = pop();
			int y = pop();
			push(x + y);
		}
		else if (strcmp(cn,"-") == 0 || strcmp(cn,"-\n") == 0) {
			int x = pop();
			int y = pop();
			push(y - x);

		}
		else if (strcmp(cn,"*") == 0 || strcmp(cn,"*\n") == 0) {
			int x = pop();
			int y = pop();
			push(x * y);
		}
		else {
			push(atoi(cn));
		}
		cn = strtok(NULL," ");
	}

	printf("%d\n",S[1]);
	
	return 0;
}
//1 2 + 3 4 - *
