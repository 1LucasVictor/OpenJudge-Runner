#include <stdio.h>
#include <stdlib.h>

int main()
{
   double a,b,w,s,x;
   while(~scanf("%lf%lf",&a,&b))
   {
       w=a+b;
       s=a-b;
       x=a*b;
       if(w>=s&&w>=s)
        printf("%.0lf\n",w);
        if(s>w&&s>x)
            printf("%.0lf\n",s);
        if(x>w&&x>s)
            printf("%.0lf\n",x);

   }
}
