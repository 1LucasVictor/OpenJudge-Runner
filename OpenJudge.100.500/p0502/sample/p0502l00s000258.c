#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int a[1000];
    for (int i = 0; i <n ; ++i) {
        scanf("%d", &a[i]);
    }
    int flag=0;
    for (int i = 0; i < n; ++i) {
        if (a[i] % 2 == 0) {
            flag++;
        }
    }
    int count=0;
    for (int i = 0; i <n ; ++i) {
        if (a[i] % 2 == 0){
            if(a[i]%3==0 || a[i]%5==0){
                count++;
            }
        }
    }
    if(flag==count){
        printf("APPROVED");
    }else{
        printf("DENIED");
    }
}