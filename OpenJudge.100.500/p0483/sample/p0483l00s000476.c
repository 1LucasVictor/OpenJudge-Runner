#include<stdio.h>
int main()
{
int a;
if(a/100==7) printf("Yes");
else  if(69<a%100<80) printf("Yes");
else  if(a%10==7) printf("Yes");
else printf("No");
return 0;
}