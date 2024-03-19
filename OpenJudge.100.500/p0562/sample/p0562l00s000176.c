#include <stdio.h>

int main(void){
    int a,b,sum=1,ans=0,i;
    scanf("%d %d", &a,&b);

    while(sum<b){
        sum += -1+a;
        ans++;
    }

    printf("%d\n",ans);
    return 0;
}
