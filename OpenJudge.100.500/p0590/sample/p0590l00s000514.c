#include <stdio.h>
int main(void){
    int a[5],k;
    for(int i=0;i<5;i++) scanf("%d",&a[i]);
    scanf("%d",&k);
    if(a[4]-a[0]<=k) printf("Yay!");
    else printf(":(");
    return 0;
}