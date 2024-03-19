#include <stdio.h>
#include <stdlib.h>
#include <math.h>


void push(int);
int pop(void);
int isEmpty(void);
int isFull(void);
void initialize(void);
int top,t=0;
int S[100];

int main()
{
	int c,b;	
	char x[100],a;
	
initialize();
	while(scanf("%s",x) != EOF) {
				if (x[0]=='+') {
		
			b=pop();
			c=pop();
			push(c+b);
}	
else if(	x[0]== '*') {	
			
			b=pop();
			c=pop();
			push(c* b);
}
		else if(x[0]== '-') {
					b=pop();
			c=pop();
			push(c-b);
		}
			
	else {
			push(atoi(x));
	
	}
	}
	printf("%d\n",pop());
		
	return 0;
}

void initialize() {
  top = 0;
}

 int isEmpty() {
    return top == 0;
   }

int isFull() {
   return top >= 100 - 1;
   }

void push(int x) {
	
	if(isFull())  exit(0); 
	
      	top++;
   S[top] = x;
   t=0;
   }
   

int pop() {
	   if( isEmpty()) exit(0);
top--;
     return S[top+1];
     
     }
