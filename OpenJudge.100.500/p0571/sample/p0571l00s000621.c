#include<stdio.h>

int main(void){
   int n,s,a,b;
   scanf("%d%d%d",&n,&a,&b);
   s=n*a;
   if(s<b) printf("%d",s);
   else printf("%d",b);
   return 0;
}
