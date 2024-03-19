#include<stdio.h>

int main( ){

  int a,b,s;
  char op;
  while(1){
 scanf("%d %c %d",&a,&op,&b);
    if (op=='+'){
s=a+b;
printf("%d\n",s);}
    else if(op=='-'){
s=a-b;
printf("%d\n",s);}
else if(op=='*'){
s=a*b;
printf("%d\n",s);}
else if(op=='/'){
  s=a/b;
printf("%d\n",s);}
 else if(op=='?'){break;}
  }
return 0;
}