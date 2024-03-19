#include <stdio.h>

int main(void) {
    int i, n, count;
    long num;

    scanf("%d", &n);
    count=0;
    for (i=0; i<n; i++) {
        scanf("%ld", &num);
        if (num==2) {
            count++;
        } else if (num==3) {
            count++;
        } else if (num==5) {
            count++;
        } else if (num==7) {
            count++;
        } else if (num%2!=0 && num%3!=0 && num%5!=0 && num%7!=0) {
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}

