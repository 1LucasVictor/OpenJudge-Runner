#include <stdio.h>
int main(void){
    int a,n,m;
    scanf("%d%d%d",&a,&n,&m);
    if(a*n<m) printf("%d",a*n);
    else printf("%d",m);
}