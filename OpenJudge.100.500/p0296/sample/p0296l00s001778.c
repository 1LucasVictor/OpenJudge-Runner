#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int top, S[100];

void push(int x) {
	top++;
	S[top] = x;
}

int pop() {
	top--;
	return S[top+1];
}
int main(void){
	int i,j;
	while (scanf("%s",S)!=EOF){
		if (S[0]=='+'){
			i=pop();
			j=pop();
			push(i+j);
		}
		else if(S[0]=='-'){
			i=pop();
			j=pop();
			push(j-i);
		}
		else if(S[0]=='*'){
			i=pop();
			j=pop();
			push(i*j);
		}
		else{
			push(atoi(S));
		}
	}
	printf("%d\n",S[1]);
	return 0;
}
		