#include<stdio.h>
int main () {
    int n,i,a[100];
    scanf ("%d",&n);
    for (int i=0;i<n;i++) {
        scanf ("%d",&a[i]);
    }
    for (i=0;i<n;i++) {
        printf ("%d",a[n-1-i]);
        if (i!=n-1) {
            putchar(' ');
        }
    }
    putchar('\n');
    return 0;
}
