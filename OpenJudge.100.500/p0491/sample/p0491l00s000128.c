#include <stdio.h>
#include <stdlib.h>
int main(void){
    int num,k,res,a;
    scanf("%d %d",&num,&k);
    res = num%k;
    a = abs(res - k);
    if(a > res)printf("%d",res);
    else printf("%d",a);
}
