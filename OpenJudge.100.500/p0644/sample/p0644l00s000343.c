#include<stdio.h>
void main()
{
int x,count=0;
scanf("%d",&x);
count+=x%10;
x/=10;
count+=x%10;
x/=10;
count+=x%10;
printf("%d",count);
}
