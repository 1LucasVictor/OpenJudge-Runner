#include<stdio.h>

int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int ans =-1;
    if(a<= 9 && a>=1 &&b<= 9 && b>=1)
    ans = a*b;
    printf("%d",ans);
    return 0;
}