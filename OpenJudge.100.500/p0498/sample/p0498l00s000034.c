#include<stdio.h>
int main(void){
    int N,a=0;
    scanf("%d",&N);
    if(N%2==1)
    ++a;
    a+=N/2;
    printf("%d",a);
    return 0;
}