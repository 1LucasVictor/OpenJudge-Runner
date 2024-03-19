#include<stdio.h>
int main (){

  int a,b;
  char op;
  int i;

  for(i=0;;i++){

  scanf("%d %c %d",&a,&op,&b);

  int c;

  if(op=='+'){
    c=a+b;
  }
  if(op=='-'){
    c=a-b;
  }
  if(op=='*'){
      c=a*b;
  }
   if(op=='/'){
        c=a/b;
      }
   if(op=='?') break;
   printf("%d\n",c);
  }



  return 0;
}