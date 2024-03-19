#include <stdio.h>

int main(){
   long n,m,k,i,j,a[200000],b[200000],ans,kk,aa;

   scanf("%ld %ld %ld",&n,&m,&k);
   for (i=0;i<n;i++) {
      scanf("%ld",&j);
      if (i>0) a[i]=a[i-1]+j;
      else     a[0]=j;
   }
   for (i=0;i<m;i++) {
      scanf("%ld",&j);
      if (i>0) b[i]=b[i-1]+j;
      else     b[0]=j;
   }
   ans=0;
   for (j=0;j<m;j++)
      if (b[j]>k) break;
   j--;
   for (i=0;i<=n;i++) {
      kk=k;
      if (i>0) kk-=a[i-1];
      if (kk<0) break;
      while (j>=0 && kk<b[j]) j--; 
      aa=i+j+1;
      if (ans<aa) ans=aa;
   }
   printf("%ld\n",ans);
   return 0;
}
