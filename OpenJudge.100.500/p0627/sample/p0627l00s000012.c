#include <stdio.h>

int main(void)
{
   int a,b,ans;
   int ad,sb,ml;

   scanf("%d%d",&a,&b);

   ad=a+b;
   sb=a-b;
   ml=a*b;

   ans = ad;
   if((ad>=sb)&&(ad>=ml))
      ans=ad;
   else if((ml>=ad)&&(ml>=ad))
      ans=ml;
   else if((sb>=ml)&&(sb>=ad))
      ans=sb;

   printf("%d\n",ans);

   return 0;
}
