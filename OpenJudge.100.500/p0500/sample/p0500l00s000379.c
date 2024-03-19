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
      if (a[s-1]==-1) a[s-1]=c;
      else if (a[s-1]!=c) {
         puts("-1");
         return 0;
      }
   }
   if (a[0]==-1) ans=1;
   else          ans=a[0];
   for (i=1;i<n;i++)
      if (a[i]>0) ans=ans*10+a[i];
      else        ans*=10;
   printf("%d\n",ans);
   return 0;
}
