#include<stdio.h>
int main()
{
int n,a,b,c;
scanf("%d",&n);
a=n%10;
b=n/100;
c=n%100;
if(a==7)
printf("Yes\n");
else if(b==7)
printf("Yes\n");
else if(c>=70&&c<=79)
printf("Yes\n");
else
printf("No\n");
return 0; 
}