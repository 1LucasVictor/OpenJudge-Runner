#include<stdio.h>

int main()
{
   int a,b,c;
   scanf("%d%d%d",&a,&b,&c);
   if((a == 5|| a == 7) && (b == 5 || b == 7) && (c == 5 || c ==7) && a+b+c == 17)
   {
   	printf("YES");
   }
   else
   {
    printf("NO");  
   }
   return 0;
}