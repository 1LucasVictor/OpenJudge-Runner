#include <stdio.h>
int main(){
  int n,i,ai,min,max,sum;
  scanf(" %d ",&n);
  max=-1000000;
  min=1000000;
  for(i=1;i<=n;i++) { 
scanf(" %d ",&ai);
 sum+=ai;
 if(max<ai){
   max=ai;
   }
 if(min>ai){
   min=ai;
  }
  }
  printf("%d %d %d\n",min,max,sum);
  return 0;
}