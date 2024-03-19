/*
 *	Argorithms and Data Structures
 *	Lectuire 3 
 *  Stack
 */

#include <stdio.h>
#include <stdlib.h>

void push(int);
int pop(void);

int dig(int);

#define N 100
int stack[N] = {0};
int top = 0;

int main(void){
	int x, y;
	char input[200];
	char *point;

	point = input;

	scanf("%[^\n]", input);

	while( *point != '\0'  ){
		if( *point == ' ') point++;
		if( '0' <= *point && *point <= '9' ){
			push( atoi(point) );
			point += dig(atoi(point));
		}
		else
		{
			y = pop();
			x = pop();
			if( *point == '+' ){
				push( x+y );
			}
			else if( *point == '*' ){
				push( x*y );
			}
			else if (*point == '-'){
				push( x-y );
			}
		}
		point++;
	}
	
	printf("%d\n", pop() );

	return 0;
};


void push(int x){
	stack[++top] = x;
}

int pop(void ){
	return stack[top--];
}

int dig(int hoge){
	int count=0;
	while( hoge/10 >= 1 ){
		count++;
		hoge /= 10;
	}
	return count;
};