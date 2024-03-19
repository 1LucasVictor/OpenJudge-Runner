#include<stdio.h>

int main(){
 int a,b;
 char e,f;
 scanf("%d %c %d",&a,&e,&b);
 while(!(e == '?')){
  if(e == '+'){
   printf("%d\n",a+b);}
  if(e == '-'){
   printf("%d\n",a-b);}
  if(e == '*'){
   printf("%d\n",a*b);}
  if(e == '/'){
   printf("%d\n",a/b);}
  scanf("%d %c %d",&a,&e,&b);}
 return 0;}