#include <stdio.h>

int main(){
   int i,n,a[200000],b[200000];

   scanf("%d",&n);
   b[0]=0;
   for (i=1;i<n;i++) {
      scanf("%d",&a[i]);
      b[i]=0;
   }
   for (i=1;i<n;i++) b[a[i]-1]++;
   for (i=0;i<n;i++) printf("%d\n",b[i]);
   return 0;
}
