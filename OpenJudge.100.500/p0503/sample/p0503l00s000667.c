#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef long long int keytype;

//quicksort(<#keytype *a#>, <#int first#>, <#int last#>)

void quicksort(keytype a[], long long int first, long long int last){
    long long int i, j;
    keytype x, t;
    
    x = a[(first + last) / 2];
    i = first;  j = last;
    for ( ; ; ) {
        while (a[i] < x) i++;
        while (x < a[j]) j--;
        if (i >= j) break;
        t = a[i];  a[i] = a[j];  a[j] = t;
        i++;  j--;
    }
    if (first  < i - 1) quicksort(a, first , i - 1);
    if (j + 1 < last) quicksort(a, j + 1, last);
}

int main() {
    long long int n,i,m=0;
    long long int a[200000];
    scanf("%lld",&n);
    for (i=0; i<n; i++) {
     scanf("%lld",&a[i]);
    }
    quicksort(a, 0, n-1);
    for (i=1;i<n;i++) {
        if (a[i]==a[i-1]) {
            printf("NO");
            m=1;
            break;
        }
    }
    if (m==0) {
        printf("YES");
    }
    
    
    return 0;
}
