#include <stdio.h>
int main(void){
    int d,n,i;
    scanf("%d%d",&d,&n);
    if(d==0) printf("%d",n);
    else if(d==1) printf("%d",n*100);
    else printf("%d",n*10000);
    return 0;
}