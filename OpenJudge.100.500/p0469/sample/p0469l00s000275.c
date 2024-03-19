#include<stdio.h>
int main(void){
    int k,a,b;
    scanf("%d%d%d",&k,&a,&b);
    if((a/k+1)*k<=b)
    printf("OK");
    else if(k==a)
    printf("OK");
    
    else
    {
        printf("NG");
    }
    return 0;
}