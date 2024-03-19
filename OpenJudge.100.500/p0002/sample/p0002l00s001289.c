#include<stdio.h>
#include<math.h>
int main()
{
   int n,i,a,b,c,s;
   scanf("%d",&n);
      for(i=1;i<=n;i++){
         scanf("%d %d %d",&a,&b,&c);
         s=sqrt((a*a)+(b*b));
         if(s==c)
            printf("YES\n");
         else
            printf("NO\n");
      }
   return 0;
}