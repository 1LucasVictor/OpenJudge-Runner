#include<stdio.h>
int main()
{
    long long int a,b,c,d,e,sum=0,i;
    char ara[1000000];
    scanf("%lld%lld",&a,&b);
    for(i=0;i<b;i++){
        scanf("%d",&ara[i]);
        sum=sum+ara[i];
    }
    if(sum>=a){
        printf("Yes\n");
    }
    else{
        printf("No\n");
    }
}
