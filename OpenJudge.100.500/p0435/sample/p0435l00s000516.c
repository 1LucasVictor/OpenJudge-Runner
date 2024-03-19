//https://atcoder.jp/contests/abc174/tasks/abc174_b
#include <stdio.h>
#include <math.h>

int main() {
    
    float a[100];
    float b[100];
    int n= 0;
    int D= 0;
    int j= 0;
    
    printf("\n");
    scanf("%d", &n);
    scanf("%d", &D);
    
    for(int i=0; i<n; i++){
        printf("\n");
        scanf("%f", &a[i]);
        scanf("%f", &b[i]);
        
        if(sqrt(pow(a[i], 2) + pow(b[i], 2))<D||sqrt(pow(a[i], 2) + pow(b[i], 2))==D)
                  j++;
    }
    printf("%d", j);
    
    return 0;
}
