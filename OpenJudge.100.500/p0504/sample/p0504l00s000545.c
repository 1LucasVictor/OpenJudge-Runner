#include <stdio.h>

int main(void)
{
 int h,a,i;

 scanf("%d%d",&h,&a);

 i=h/a;
 if(h%a>0) i++;

 printf("%d\n",i);

 return 0;
}
