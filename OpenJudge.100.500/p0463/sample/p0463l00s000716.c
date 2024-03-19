#include <stdio.h>
#include <string.h>

int main()
{
   int n;
   scanf("%d",&n);
   int a=n%10;
   if(a==3)  printf("bon\n");
   else if(a==0||a==1||a==6||a==8)  printf("pon\n");
   else  printf("hon\n");
}
