#include<stdio.h>
int main(void)
{
    int a,b,k,i,s=0,tmp;
    scanf("%d%d%d",&a,&b,&k);
    if(a>b) {tmp=a; a=b; b=tmp;}
    for(i=1;i<=a;i++){
        if((a%i==0)&&(b%i==0))
            s++;
        if(s==k)
            break;
    }
    printf("%d\n",i);
    return 0;
}