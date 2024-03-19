#include<stdio.h>
#include<string.h>
int main(void){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    int ans=c-a+b;
    if(ans>=0)
    printf("%d",ans);
    else
    {printf("0");}
    return 0;
}