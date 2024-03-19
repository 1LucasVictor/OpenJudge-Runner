#include<stdio.h>
#include<math.h>
int main()
{
   
   int n,d,ans=0;
   scanf("%d %d",&n,&d);
   double dis=0;
   for(int i=0;i<n;i++){
       double x,y;
       scanf("%lf %lf",&x,&y);
       dis=sqrt(x*x+y*y);
       if(dis<=d)ans++;
   }
   printf("%d\n",ans);
}