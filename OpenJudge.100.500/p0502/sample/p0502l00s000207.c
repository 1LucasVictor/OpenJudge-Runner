#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int a[1000];
    for (int i = 0; i <n ; ++i) {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i <n ; ++i) {
        if(a[i]%2==0){
            if(a[i]%3==0 || a[i]%5==0){
                printf("APPROVED");
                return 0;
            }
        }else{
            printf("DENIED");
            return 0;
        }
    }
}