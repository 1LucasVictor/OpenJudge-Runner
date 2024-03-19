#include<stdio.h>
int main()
{
int n,i;
scanf("%d",&n);
if((n==1) || (n==10) || (n==100) )
printf("1");
if ((n==11) || (n==101) || (n==110))
printf("2");
if (n==111)
printf("3");
if(n==0)
printf("0");
return 0;
}