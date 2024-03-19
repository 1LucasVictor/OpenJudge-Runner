#include<stdio.h>
int main(){
  int a, x[1000], i=0;
  
  while( scanf("%d",&a) != EOF ){
    
    if( a != 0 ){
      x[i]=a;
      i++;
    }
    
    else if( a == 0 ){
      printf("%d\n",x[i-1]);
      i--;
    }
    
  }

  return 0;
}