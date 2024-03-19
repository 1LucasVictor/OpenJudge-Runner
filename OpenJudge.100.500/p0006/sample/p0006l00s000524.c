#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n,i,money=100000;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        money=money*1.05;
    }
    if(money%10000!=0)
        money=(money/10000+1)*10000+0;
        printf("%d\n",money);
    return 0;
}