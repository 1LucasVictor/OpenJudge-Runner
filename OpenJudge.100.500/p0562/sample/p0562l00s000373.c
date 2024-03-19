#include <stdio.h>

int main(){
   int a,b,i;
 
   scanf("%d %d",&a,&b);
   for (i=1;;i++) 
      if (b<=a*i-i+1) break;
   if (b==1) puts("0");
   else      printf("%d\n",i);
   return 0;
}
