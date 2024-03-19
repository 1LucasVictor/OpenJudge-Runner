#include<stdio.h>
#include <string.h>
#include <stdlib.h>

\
int main (){
    
  int a,b,t;
  int ans,n;
  
  scanf("%d %d %d",&a,&b,&t);
  
  n = t / a;
  ans = b * n;
  
  printf("%d",ans);
      return 0;
  
}

