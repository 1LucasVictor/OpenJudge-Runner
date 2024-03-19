#include<stdio.h>
int main(void)
{
    int a,b=100000,c,d=0,i;
    scanf("%d",&a);
    for(i=1;i<=a;i++){
        b=b*1.05;
    if(b%1000!=0){
        c=b/1000+1;
        b=c*1000;
    }
    }
    printf("%d\n",b);
    return 0;
}