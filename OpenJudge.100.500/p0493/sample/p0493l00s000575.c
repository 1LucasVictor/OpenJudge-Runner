#include<stdio.h>
#include<string.h>

int main(void){
    int x,ans=0,num;
    scanf("%d",&x);
    ans += (x/500)*1000;
    x %=1000;
    ans += (x/5)*5;
    printf("%d",ans);
    return 0;
}
