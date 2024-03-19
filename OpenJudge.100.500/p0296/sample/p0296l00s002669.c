#include <stdio.h>
#include <stdlib.h>
#define MAX 100

int top=0;
char c_stack[MAX];
int i_stack[MAX];
void push(int);
int pop(void);

int main(){
  int x,a,b,i;
  while(scanf("%s",c_stack)!=EOF){
    if(c_stack[0]=='+'){
      a=pop();
      b=pop();
      push(a+b);
    }
    else if(c_stack[0]=='-'){
      b=pop();
      a=pop();
      push(a-b);
    }
    else if(c_stack[0]=='*'){
      a=pop();
      b=pop();
      push(a*b);
    }
    else {
      x=atoi(c_stack); 
      push(x);
    }
  }
  x=0;
  for(i=1;i<=top;i++)
    x=i_stack[i] + x;
  printf("%d\n",x);
  return 0;
}

void push(int x){

 
  top++;
  i_stack[top]=x;

}

int pop(void){

  top--;
  return i_stack[top+1];

}



/*initialize();

    top=0;

    isEmpty();
    return top==0;

    isFull()
      return top >=MAX-1


      push(x)
      if isFull()
		 printf("ERROR OBER FLOW");
    top++;
    S[top] = x

      pop()
      if isEmpty()
		  printf("ERROR UNDER FLOW");


    top--;
    return S[top+1]

  



  return 0;
}
  */

