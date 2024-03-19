#include <stdio.h>

int main(){
   long h,s;
   int n,i,a;
 
   scanf("%ld %d",&h,&n);
   s=0;
   for (i=0;i<n;i++) {
      scanf("%d",&a);
      s+=a;
   }
   if (h<=s) puts("Yes");
   else      puts("No");
   return 0;
}
