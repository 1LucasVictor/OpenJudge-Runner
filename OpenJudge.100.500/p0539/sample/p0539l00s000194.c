#include<stdio.h>
int main()
{
    int x=0,N,i;
    scanf("%d",&N);
    for(i=1;i<=9;i++){
        if(N%i==0 && N/i<=9){
            printf("Yes\n");
        x=1;
        break;
        }
    }
    if(x==0){
        printf("No\n");
    }
    return 0;
}