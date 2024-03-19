#include <stdio.h>
int main(void){
    int h, n;
    scanf("%d%d", &h, &n);
    int a[n];
    int sum = 0;
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
        sum += a[i];
    }

    if(h <= sum){
        printf("Yes");
        return 0;
    }else{
        printf("No");
    }
    return 0;
}