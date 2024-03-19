#include <stdio.h>

int main(){
    int i,n;
    int a[10001];
    int max = -1000001, min = 1000001;
    double sum = 0;

    scanf("%d", &n);
    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    for(i=0; i<n; i++){
        if(a[i]>=max) max = a[i];
        if(a[i]<=min) min = a[i];
        sum += a[i];
    }
    printf("%d %d %.0lf\n", min, max, sum);
}

