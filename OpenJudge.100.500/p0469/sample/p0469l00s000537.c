#include<stdio.h>

int main(void){
    int a,b,k;
    scanf("%d%d%d",&k,&a,&b);
    for(int i = a;i <= b;i++)if(!(i%k)){
        puts("OK");
        return 0;
    }
    puts("NG");
}