#include <stdio.h>

int main(){
   int n,m,i,j,a[3],s,c,ans;
 
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
   ans=1;
   for (i=1;i<n;i++) ans*=10;
   for (;;ans++) {
      j=ans;
      for (i=n-1;i>=0;i--,j/=10)
         if (a[i]>=0 && a[i]!=j%10) break;
      if (i<0) break;
   }
   printf("%d\n",ans);
   return 0;
}
