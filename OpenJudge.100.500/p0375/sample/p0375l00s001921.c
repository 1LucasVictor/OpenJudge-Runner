#include <stdio.h>
 
int main()
{
 int n, i, x;
 scanf("%d", &n);
 if(n<3) return 0;
 
 for(i=3; i<=n; i++){
  x=i;
  if(x%3 == 0) printf(" %d", i);
  else{
   while(x){
    if(x%10 == 3) printf(" %d", i);
    x /= 10;
   }
  }
 }
 puts("");
 return(0);
 
}