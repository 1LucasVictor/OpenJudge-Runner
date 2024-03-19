#include<stdio.h>
main()
{
int n,i;
scanf("%d",&n);
i=n%10;
if(i==3)
{
printf("bon\n");
}
else if(i==0||i==1||i==6||i==8)
{
printf("pon\n");
}
else printf("hon\n");
}