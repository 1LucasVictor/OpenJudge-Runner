#include<stdio.h>
int main()
{
    int i=0,n=0,a[10000],sum;
    while(1)
    {
        scanf("%d",&a[i]);
        if(a[i]==0){
            break;
        }
        i++;
        n++;
    }
    for(i=0;i<n;i++){
        sum=0;
        while(a[i]!=0){
            sum=sum+(a[i]%10);
            a[i]=a[i]/10;
        }
        printf("%d\n",sum);
    }
    return 0;
}

