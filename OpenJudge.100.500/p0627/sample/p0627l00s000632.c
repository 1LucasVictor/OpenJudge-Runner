#include <stdio.h>
int main(void){
    int a,b;
    scanf("%d%d",&a,&b);
    int ans=a+b;
    if(ans<a-b) ans=a-b;
    if(ans<a*b) ans=a*b;
    printf("%d",ans);
}
