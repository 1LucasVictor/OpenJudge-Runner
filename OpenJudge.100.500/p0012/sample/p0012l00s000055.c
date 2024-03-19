#include <stdio.h>
#define SIZE 10

/* prototype declaration */
void init();
void operation();
void push(int data);
int pop();

int s[SIZE];
int sp;

int main(int argc, const char *argv[])
{
	init();
	operation();
	return 0;
}

void init()
{
	int i;
	sp = 0;
	for(i=0; i<SIZE; i++) s[i] = 0;
}

void operation()
{
	int car;
	while(scanf("%d", &car) != EOF){
		if(car) push(car);
		else printf("%d\n",pop());
	}
}

void push(int data)
{
	s[sp++] = data;
}

int pop()
{
	return s[--sp];	
}