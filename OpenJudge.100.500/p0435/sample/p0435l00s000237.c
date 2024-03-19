//https://atcoder.jp/contests/abc174/tasks/abc174_b
#include <stdio.h>
#include <math.h>

int main() {
    
    int a[100], b[100];
    int n, D;
    int j= 0;
    
    printf("\n");
    scanf("%d", &n);
    scanf("%d", &D);
    
    for(int i=0; i<n; i++){
        printf("\n");
        scanf("%d", &a[i]);
        scanf("%d", &b[i]);
        
        if(sqrt(pow(a[i], 2)+pow(b[i], 2))<D)
            j++;
        else if(sqrt(pow(a[i], 2)+pow(b[i], 2))==D)
            j++;
    }
    printf("%d", j);
    
    return 0;
}
