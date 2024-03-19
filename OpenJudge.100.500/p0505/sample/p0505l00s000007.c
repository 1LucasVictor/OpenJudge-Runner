#include <stdio.h>
int main(){
    int h, n;
    scanf("%d %d", &h, &n);
    int a[n];
    for (int i = 0; i <n ; ++i) {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i <n ; ++i) {
        h = h-a[i];
    }
    if(h>0) printf("No");
    else printf("Yes");
}