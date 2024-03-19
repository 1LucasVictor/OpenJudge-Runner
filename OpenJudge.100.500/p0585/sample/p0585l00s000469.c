#include<stdio.h>
int main()
{
    int a,b,t,i,count=0;
    scanf("%d %d %d",&a,&b,&t);
    for(i=a;i<=t+0.5;i+=a){
        count=count+b;
    }
    printf("%d\n",count);
    return 0;
}