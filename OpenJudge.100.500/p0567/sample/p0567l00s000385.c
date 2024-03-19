#include <stdio.h>
typedef long long ll;

int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int ans;
    ans=c-(a-b);
    if(ans<=0) ans=0;
    printf("%d",ans);
}

