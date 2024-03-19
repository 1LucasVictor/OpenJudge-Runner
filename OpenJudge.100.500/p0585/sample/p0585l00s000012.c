#include<stdio.h>
int main()
{

int a,b,i,sum=0;
int t;
scanf("%d%d",&a,&b);
scanf("%d",&t);


for(i=1;i<=a;i++)
{

    if(a*i<=t)
        sum=b+sum;
}

printf("%d",sum);

return 0;
}
