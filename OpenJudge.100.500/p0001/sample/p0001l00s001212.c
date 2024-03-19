#include<stdio.h>
int main()
{
int a,b,n,sum,i;
while(scanf("%d %d",&a,&b)==2)
{
    n=0;
    sum=a+b;
    for(i=sum;i>0; )
    {
      i=i/10;
    n++;
    }
    printf("%d\n",n);

}

return 0;
}