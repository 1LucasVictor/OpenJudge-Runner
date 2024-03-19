#include <stdio.h>
int main(void){
    int a,b;
    scanf("%d%d",&a,&b);
    if(a>9 || b>9) printf("-1");
    else printf("%d",a*b);
    return 0;
}