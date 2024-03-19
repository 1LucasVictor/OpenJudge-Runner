#include <stdio.h>

int fibonacci(int ); 

int main(){
  int i,n;
 
  scanf("%d",&n);
  printf("%d\n",fibonacci(n));
 
  return 0;
}


int fibonacci(int n){
  int i;
  int a=1, b=1, tmp=1;
 
  for(i=2;i<=n;i++){
    tmp = a + b;
    a = b;
    b = tmp;
  }
  return tmp;
}