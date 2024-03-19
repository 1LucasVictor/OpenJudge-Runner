#include<stdio.h>

int main(void){

int a=0;
int b=0;
int k=0;

scanf("%d",&a);
scanf("%d",&b);

if(a%2!=b%2){
  printf("IMPOSSIBLE");
}else{
  k=(a+b)/2;
  printf("%d",k);
}
return 0;
}
