#include <stdio.h>

int stack[100];
int n = 0;

int pop(void);
void push(int);

int main(){
  int a, b, x, y;
   while ((a = getchar())!='\n'){

     if (isdigit(a)){
       ungetc(a, stdin);
       scanf("%d", &b);
       push(b);
     }
     else {
       switch(a) {

       case '+':
	 x = pop();
	 y = pop();
	 push(x + y);
	 break;

       case '-':
	 x = pop();
	 y = pop();
	 push(y - x);
	 break;

       case '*':
	 push(pop()*pop());
	 break;

       }
     }
   }

   printf("%d\n",stack[1]);
   
   return 0;
  
}

int pop(){
  int A = stack[n];
  n--;
  return A;
}

void push(int p){
  n++;
  stack[n] = p;
}


  
