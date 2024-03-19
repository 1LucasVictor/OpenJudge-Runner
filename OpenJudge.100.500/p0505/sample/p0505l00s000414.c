#include<stdio.h>
int main()
{
    int h,a,n,i,sub,c=0,sum=0;
    scanf("%d%d",&h,&n);
    if(n>2){
    for(i=0;i<n;i++)
    {
        scanf("%d",&a);
        sum+=a;
    }
        sub=h-sum;
         if(sub==0||sub<0)
         {
             printf("Yes\n");
         }
         else
         {
             printf("No\n");
         }

    }
    else
    {


    printf("No\n");
    }
    return 0;
}
