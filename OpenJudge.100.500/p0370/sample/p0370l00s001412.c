#include<stdio.h>
int main(){
int a,b,N;
char op;
scanf("%d %c %d",&a,&op,&b);
while(op != '?'){
 if(op == '+'){
  N = a + b;
  printf("%d\n",N); }
 else if(op == '-'){
  N = a - b;
  printf("%d\n",N);}
 else if(op == '*'){
  N = a * b;
  printf("%d\n",N);}
 else{
  N = a / b;
  printf("%d\n",N);}
scanf("%d %c %d",&a,&op,&b);}
return 0;
}
