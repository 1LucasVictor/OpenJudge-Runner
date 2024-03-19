#include <stdio.h>
int main()
{
    int i=0,h,a,sum=0;
    scanf("%d %d",&h,&a);
    while(h>0)
{
    h=h-a;
    sum++;
}
printf("%d",sum);
	return 0;
}