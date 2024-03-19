#include<stdio.h>
int main(void){
  long int a,b,c;
  scanf("%ld",&a);
  b=a/500;
  a=a%500;
  c=a/5;
  printf("%ld",5*c+1000*b);
 return 0; 
}
