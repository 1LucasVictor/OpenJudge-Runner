#include<stdio.h>
int main(void)
{
    int n,s=0;
    scanf("%d",&n);
    while(n/10!=0){
        if(n%10==7){
            s=1;
            break;
        }
        n=n/10;
    }
    if((n==7)||(s==1))
        printf("Yes\n");
    else 
        printf("No\n");
    return 0;
}