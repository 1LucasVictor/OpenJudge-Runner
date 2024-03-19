#include <stdio.h>

int main(void) {
    int l, r, k, a = 2020;
    scanf("%d%d", &l, &r);
    if((r - l) >= 2019) {
        a = 0;
        printf("%d\n", a);
        return 0;
    }
    for(int i = l; i < r  &&  i <= l+2019; i++) {
        for(int j = i+1; j <= r  &&  j <= l+2019; j++) {
            if(i < j) {
                k = (i%2019) * (j%2019);
                if(a > k) a = k;
            }
        }
    }
    printf("%d\n", a);
    return 0;
}
