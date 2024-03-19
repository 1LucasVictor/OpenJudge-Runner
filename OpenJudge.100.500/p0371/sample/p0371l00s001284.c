#include<stdio.h>
int main()
{
    int i,a,n,min,max,sum=0;
    scanf("%d\n",&n);
    for(i=1;i<=n;i++)
    { scanf("%d",&a);

      sum=sum+a;


    if(i==1)
    { min=a;
    max=a; }

    else if(min>a)
    min=a;
    else if(max<a)
    max=a;

    }
    printf("%d %d %d\n",min,max,sum);


   return 0;

}

