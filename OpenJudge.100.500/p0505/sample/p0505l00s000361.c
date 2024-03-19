#include <stdio.h>

int main(){
    int i, h, n;
    int sum=0;
    scanf("%d",&h);
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        sum += a[i];
    }
    if(h > sum)
        printf("No");
    else
        printf("Yes");
    return 0;
}