#include <stdio.h>
int a,b,c,k;
int main() {
  
  scanf("%d %d",&a,&b);   
  
  k=(a+b)/2;
  c=(a+b)%2;
  
 if(c==0)
   {printf("%d\n",k);} 
 else
   {printf("IMPOSSIBLE\n");}
  return 0;
}