#include<stdio.h>
 int main(void)
 {
 int h,a,s,t;

 scanf("%d%d",&h,&a);
 s=h/a;
 if (h%a==0)
   printf("%d\n",s);
 else printf("%d\n",s+1);
 return 0;
 }

