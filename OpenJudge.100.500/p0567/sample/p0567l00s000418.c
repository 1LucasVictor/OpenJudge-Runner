#include <stdio.h>
int max(int n,int m){
    if(n>m) return n;
    else return m;
}
int main(void){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    printf("%d",max(c-(a-b),0));
    return 0;
}