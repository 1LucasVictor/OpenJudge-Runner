#include<stdio.h>

int main (void)
{
    int A,B,k;
    char c;

    scanf("%d",&k);
    scanf("%c",&c);
    scanf("%d %d",&A,&B);

    if(A/k==B/k){

        if(A%k==0||B%k==0){
            printf("OK");
        }else {
            printf("NG");
        }
    }else{
        printf("OK");
    }


    return 0;
}