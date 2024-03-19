#include<stdio.h>
int main(void)
{
    int a,b,k,i,s=0;
    scanf("%d%d%d",&a,&b,&k);
    for(i=1;i<=a;i++){
        if((a%i==0)&&(b%i==0))
            s++;
        if(s==k)
            break;
    }
    printf("%d\n",i);
    return 0;
}