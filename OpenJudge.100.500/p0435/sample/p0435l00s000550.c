#include <stdio.h>
//#include <string.h>

int main(void){
  
  long int n,d;
  long int x,y;
  int count = 0;
  scanf("%ld %ld", &n, &d);
  
  for(int i=0;i<n;i++){
  scanf("%ld %ld", &x, &y);
  if(x*x+y*y <= d*d){
  count=count+1;
  }
  }
  
  printf("%d", count);
    
    
  return 0;
}
