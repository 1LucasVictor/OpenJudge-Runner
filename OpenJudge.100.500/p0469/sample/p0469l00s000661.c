#include <stdio.h>

int main(void){
    int k;
    int a;
    int b;

    int As,Bs,Aa,Ba;

    scanf("%d",&k);
    scanf("%d %d",&a,&b);

    As=a/k;
    Bs=b/k;

    Aa=a%k;
    Ba=b%k;



    if(Aa==0 && Ba==0){
        printf("OK");
    }
    else if(As==Bs){
        printf("NG");
    }
    else{
        printf("OK");
    }

    return 0;
}