#include <stdio.h>
int main(int argc, const char * argv[])

{
   int h,m,s;
   scanf("%d",&s);
   m=s/60;
   s=s%60;
   h=m/60;
   m=m%60;

   printf("%d:%d:%d\n",h,m,s);
    return 0;

}