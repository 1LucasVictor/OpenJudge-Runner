#include<stdio.h>
int main(){
    int k;
    scanf("%d",&k);

    int a,b;
    scanf("%d %d",&a,&b);

    if((b-a) >= k)printf("OK\n");
    else printf("NG\n");

    return 0;
    }