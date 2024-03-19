#include <stdio.h>
int main() {
    int n,t;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; ++i) {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i <n-1 ; ++i) {
        for (int j = n-1; j>i ; j--) {
            if(a[j]<a[j-1]){
                t=a[j];a[j]=a[j-1];a[j-1]=t;
            }
        }
    }
    for (int i = 0; i < n; ++i) {
        if(a[i]==a[i+1]){
            printf("NO");
            return 0;
        }
    }
    printf("YES");
    return 0;
}