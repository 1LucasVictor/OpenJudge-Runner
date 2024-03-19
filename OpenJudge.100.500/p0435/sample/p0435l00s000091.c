//https://atcoder.jp/contests/abc174/tasks/abc174_b
#include <stdio.h>
#include <math.h>

int main() {
    
    int a[100], b[100], c[100], d[100];
    int n, D;
    int j= 0;
    
    printf("\n");
    scanf("%d", &n);
    scanf("%d", &D);
    
    for(int i=0; i<n; i++){
        printf("\n");
        scanf("%d", &a[i]);
        scanf("%d", &b[i]);
        
        c[i]= pow(a[i], 2);
        d[i]= pow(b[i], 2);
        
        if(sqrt(c[i]+d[i])<D)
            j++;
        else if(sqrt(c[i]+d[i])==D)
            j++;
    }
    printf("%d", j);
    
    return 0;
}