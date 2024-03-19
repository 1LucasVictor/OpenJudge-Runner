#include<stdio.h>
int main()
{
    int a,b,les,k,i,count=0,res[20];
    scanf("%d%d%d",&a,&b,&k);
    if(a>b)
    les=b;
    else
    les=a;
    for(i=1;i<=les;i++)
    {
        if(a%i==0&&b%i==0)
        {
            res[count]=i;
            count++;
            
        }
    }

    count=count-k;
    printf("%d",res[count]);
    
}