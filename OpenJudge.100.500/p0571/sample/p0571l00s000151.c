#include<stdio.h>
int main(void) {
    int n,a,b;
    scanf("%d%d%d",&n,&a,&b);
    n *= a;
    if(n > b) {n = b;}
    printf("%d\n",n);
    return 0;
}