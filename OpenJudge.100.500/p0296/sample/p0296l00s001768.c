#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int array[1000],top;

void push(int);
int pop(void);

int main()
{
  int x,y,i=0;
  char array_main[100];

  top=0;

  while(scanf(" %s",array_main)!=EOF){
    /*if(array_main[0] == NULL || array_main[1] == NULL) exit(1);*/
    if(array_main[0] == '+'){
      x=pop();
      y=pop();
      /*printf("%d %d\n",x,y);*/
      if((x+y) < -1000000000 || (x+y) > 1000000000) exit(1);
      push(x+y);
    }
    else if(array_main[0] == '-'){
      x=pop();
      y=pop();
      if((y-x) < -1000000000 || (y-x) > 1000000000) exit(1);
      push(y-x);
    }
    else if(array_main[0] == '*'){
      x=pop();
      y=pop();
      if((x*y) < -1000000000 || (x*y) > 1000000000) exit(1);
      push(x*y);
    }
    else if(array_main[0]>='0' || array_main[0]<='9'){
      /*if(array_main[0]<'0' || array_main[0]>'9') exit(2);*/
      push(atoi(array_main));
    }
  }

    printf("%d\n",pop());
  
    return 0;
  
}

void push(int x)
{
  array[++top]=x;
}

int pop()
{
  top--;
  return array[top+1];
}

