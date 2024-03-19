#include<stdio.h>
int judge(int n)
{
	if(1<=n&&n<=9)
      return 1;
    else
      return -1;
}
int main()
{
	int a,b;
    scanf("%d%d",&a,&b);
    if(judge(a)==1&&judge(b)==1)
      printf("%d",a*b);
    else
      printf("-1");
    return 0;
}