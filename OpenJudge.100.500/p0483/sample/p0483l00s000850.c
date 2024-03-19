#include<stdio.h>

int main(){
    int n,ans = 0;
    scanf("%d",&n);

    if(n / 100 == 7)ans = 1;
    if(n / 10 == 7)ans = 1;
    if((n % 10) == 7)ans = 1;

    if(ans)printf("Yes\n");
    else printf("No\n");
    return 0;
}