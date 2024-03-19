#include<stdio.h>

#define MAX_N 100

int stack[MAX_N];
int top;

void push( int n )
{
	stack[top++] = n;
}

int pop(void)
{
	return stack[--top];
}

int main(void)
{
	int n;
	
	while( scanf( "%d", &n ) != EOF ) {
		if ( n == 0 ) {
			printf( "%d\n", pop() );
		}
		else {
			push( n );
		}
	}
	
	return 0;
}