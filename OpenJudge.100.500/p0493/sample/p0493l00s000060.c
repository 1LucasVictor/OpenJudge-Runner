#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

typedef int keytype;

//quicksort(<#keytype *a#>, <#int first#>, <#int last#>)

void quicksort(keytype a[], int first, int last){
    int i, j;
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

int gcd(int x, int y){
    if (y == 0) return x;
    else        return gcd(y, x % y);
}

int main() {
    long long int x,ans,sen,go,sen_a,go_a;
    scanf("%lld",&x);
    sen_a=x%500;
    sen=(x-sen_a)/500;
    go_a=(x-(sen*500))%5;
    go=(x-(sen*500)-go_a)/5;
    ans=(sen*1000)+(go*5);
    printf("%lld",ans);
    return 0;
}
