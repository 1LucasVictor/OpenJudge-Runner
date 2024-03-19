#include <stdio.h>
#include <stdlib.h>
#define MAXOP 100
#define MAXVAL 100
void push(int);
int pop(void);
int main()
{
  char t[100];
  int op2,a;
  char s[MAXOP];

  while(scanf("%s",t)!=EOF) {
	  if(t[0]== '+'){
			push(pop() + pop());
	  }
	  else if(t[0]=='*'){
			push(pop() * pop());
	  }
	  else if(t[0]=='-'){
			op2 = pop();
			push(pop() - op2);
	  }
	  else{
	    push(atoi(t));
	  }
	}
  printf("%d\n",pop());
	return 0;
}


int s = 0;
int val[MAXVAL];

void push(int f)
{
	if (s < MAXVAL)
		val[s++] = f;
}

int pop(void)
{
	if (s > 0)
		return val[--s];
	else {
		return 0;
	}
}



