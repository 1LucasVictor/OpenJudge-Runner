#include <stdio.h>

int stack[11];
int sp=0;//indicate the space to put track

void push( int n ){
	stack[sp]=n;
	sp++;
}

int pop(){
	sp--;
	return stack[sp];
}

int main(){
	int n;

	while( scanf("%d", &n) != EOF ){
		if( n == 0 ){
			printf("%d\n", pop() );
		}else{
			push( n );
		}
	}

	return 0;
}