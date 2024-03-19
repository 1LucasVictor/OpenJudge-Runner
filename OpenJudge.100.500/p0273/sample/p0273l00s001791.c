#include<stdio.h>

int fibonacci(int n){
  int num1=1,num2=1,temp=1;
  int i;

  for(i=1;i<n;i++){
    temp = num1 + num2;
    num1 = num2;
    num2 = temp;
  }
  return temp;
}

int main(){
  int a,n;
  scanf("%d",&n);
  a=fibonacci(n);

  printf("%d\n",a);

  return 0;
}
