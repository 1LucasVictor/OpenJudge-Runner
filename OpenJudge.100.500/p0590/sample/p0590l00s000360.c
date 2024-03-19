#include <stdio.h>
int main (void)
{
    int a[5],k;
    int i,j;
    scanf("%d %d %d %d %d %d",&a[0],&a[1],&a[2],&a[3],&a[4],&k);
    for (i = 0; i < 5; i++) {
        for (j = i; j < 5; j++) {
            if (a[i] - a[j] > k || a[j] - a[i] > k) {
                printf(":(");
                return 0;
            }
        }
    }
    printf("Yay!");
    return 0;
}