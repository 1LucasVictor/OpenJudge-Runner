#include<stdio.h>
int main()
{
    int n, i;
    long long x, y, z, a[10000];
    scanf("%d", &n);
    scanf("%ld", &a[0]);
    x = a[0];
    y = a[0];
    z = a[0];
    for(i = 1;i < n;i++){
        scanf("%ld", &a[i]);
        if(a[i] < x){
            x = a[i];
        }
        else if(a[i] > y){
            y = a[i];
        }
        z = z + a[i];
    }
    printf("%ld %ld %ld\n", x, y, z);
    return 0;
}
