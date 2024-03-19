#include <stdio.h>

int main(){
   int n,m,i,a[3],s,c,ans;
 
   scanf("%d %d",&n,&m);
   a[0]=a[1]=a[2]=-1;
   for (i=0;i<m;i++) {
      scanf("%d %d",&s,&c);
      if (s==1 && c==0) {
         puts("-1");
         return 0;
      }
      if (a[n-s]==-1) a[n-s]=c;
      else if (a[n-s]!=c) {
         puts("-1");
         return 0;
      }
   }
   if (a[2]<=0) ans=0;
   else         ans=a[2]*100;
   if (a[1]>0) ans+=a[1]*10;
   if (a[0]>0) ans+=a[0];
   printf("%d\n",ans);
   return 0;
}
