#include <stdio.h>
    
int main(void){
    int a,b,t;
    scanf("%d%d%d",&a,&b,&t);
    int ans = b * (t / a);
    printf("%d",ans);
}