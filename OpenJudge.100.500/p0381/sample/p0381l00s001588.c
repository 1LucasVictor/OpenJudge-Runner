#include<stdio.h>
 
int main(void) {
    int i, j, k;
    int n, x;
    int cnt = 0;
    int a[10000];
    int flag = 1;
     
     
     
    do {
        scanf("%d %d", &n, &x);
         
        a[cnt] = 0;
         
        for(i = 0; i < n-2; i++) {
            for(j = i+1; j < n-1; j++) {
                for(k = j+1; k < n; k++) {
                    if(i + j + k + 3== x) {
                        a[cnt]++;
                    }
                }
            }
        }
         
        if(n == 0 && x == 0) {
            flag = 0;
        }
         
        cnt++;
         
    } while(flag);
     
    for(i = 0; i < cnt-1; i++) {
        printf("%d\n", a[i]);
    }
     
    return 0;
}