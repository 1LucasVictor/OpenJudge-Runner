#include <stdio.h>
int fib(int);
int array[45];
int main(){
  int value,i;
  for(i=1;i<=44;i++) array[i]=-1; /*-1 means there no input*/
  scanf("%d",&value);
  printf("%d\n",fib(value));
  return 0;
}

int fib(int value){
  if(value==0){
    array[value]=1;
    return array[value];
  }
  if(value==1){
    array[value]=1;
    return array[value];
  }
  if(array[value]!=-1) return array[value];
  array[value]=fib(value-1)+fib(value-2);
  return array[value];
}
  
  

