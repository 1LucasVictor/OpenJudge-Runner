#include<stdio.h>
int main()
{
int a,b;
  scanf("%d",&a);
  b=a/10;
if(a/100==7) printf("Yes");
if(b%10==7) printf("Yes");
else  if(a%10==7) printf("Yes");
else printf("No");
return 0;
}