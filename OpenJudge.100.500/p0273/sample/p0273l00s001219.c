
#include<stdio.h>

int main(){

  int n;
  int i;
  int z;
  int x;
  int y;

  x = 1;
  y = 1;

  
  scanf("%d",&n);
  
  for(i = 0 ; i < n - 1 ; i++){
    
    z = x + y;
    
    x = y;
  
    y = z;
  }
 
  printf("%d\n",z);
  
  return 0;
}