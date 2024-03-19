#include<stdio.h>

int main(void)
{
    int N;
    scanf("%d",&N);

    int i,q,r;
    for(i=9;i>0;i--){
        if(N%i == 0){
            q = N/i;
            break;
        }
    }
        if(0<q && q < 10){
            printf("Yes");
        }
        else printf("No");
    
    return 0;   
}