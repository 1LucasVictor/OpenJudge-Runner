#include<stdio.h>
int max(int a,int b){return a > b ? a : b;}
int main(){
    int a, b, c;
    scanf("%d%d%d",&a,&b,&c);
    printf("%d\n",max(c-(a-b),0));
    return 0;
}