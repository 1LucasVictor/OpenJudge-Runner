#include <stdio.h>

int main(void) {
    int l, r, k = 0;
    int i, j;
    int x, y;
    int a[100000];
    scanf("%d%d",&l, &r);
    for(j = l+1; j <= r; j++) {
        for(i = l; i < j; i++) {
            a[k] = (i*j) % 2019;
            k++;
        }
    }
    for(i = 1; i < k; i++){
        x = a[i];
        for(j = i - 1; j >= 0; j--){
            y = a[j];
            if(y > x)
                a[j+1] = y;
            else {
                a[j+1] = x;
                break;
            }
            
            
        }
        if(j == -1) a[0] = x;
    }
    printf("%d\n", a[0]);
    return 0;
}
