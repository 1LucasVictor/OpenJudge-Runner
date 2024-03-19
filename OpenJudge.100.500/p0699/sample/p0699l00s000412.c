#include <stdio.h>
int main()
{
   int a,b,c;
   scanf("%d%d%d",&a,&b,&c);
   if(a==b&&b!=c)
   {
       if(a==5&&c==7)
        printf("YES");
       else
        printf("NO");
   }
    if(a==c&&a!=b)
    {
        if(a==5&&b==7)
            printf("YES");
        else
            printf("NO");
    }
    if(b==c&&b!=a)
    {
        if(b==5&&a==7)
          printf("YES");
        else
          printf("NO");
    }
  return 0;
}
