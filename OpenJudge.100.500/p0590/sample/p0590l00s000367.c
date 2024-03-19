#include <stdio.h>

int main(){
    int a[5];
    int k;
    scanf("%d %d %d %d %d",&a[0],&a[1],&a[2],&a[3],&a[4]);
    scanf("%d",&k);
    if(a[4] - a[0] <= k) printf("Yay!\n");
    else printf(":(\n");
    return 0;
}