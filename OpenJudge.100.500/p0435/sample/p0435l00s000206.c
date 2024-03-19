#include <stdio.h>
int main(){
  long n,d,x,y,i;
  int count=0;
  
  scanf("%ld %ld",&n,&d);
  for(i=0;i<n;i++){
    scanf("%ld %ld",&x,&y);
    if((x*x+y*y)<=(d*d)){
      count++;
    }
  }
  
  printf("%d",count);
}