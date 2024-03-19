#include <stdio.h>
int main(void){
    int k,a,b;
    scanf("%d %d %d",&k,&a,&b);
    if(b%k <= b-a)
        printf("OK");
    else
        printf("NG");
}