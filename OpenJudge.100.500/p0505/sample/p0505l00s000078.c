#include <stdio.h>

int main(){
    int h;
    int n;
    int a[10001] = {0};
    int i;

    scanf("%d %d", &h, &n);
    for(i=0;i<n;i++)
        scanf("%d", &a[i]);

    for(i=0;i<n;i++){
        h -= a[i];
    }

    if(h <= 0)
        printf("Yes\n");
    else
        printf("No\n");

    return 0;
}