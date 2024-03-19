#include<stdio.h>

int main(void){
    int a,b,k;
    scanf("%d%d%d",&k,&a,&b);
    if(k==1){
        puts("OK");
        return 0;
    }
    puts(a/k != b/k?"OK":"NG");
}