#include <stdio.h>
 
int main(void)
{
    int n;
    int i, j, k;
    int ans, tmp;
    int a[5000];
     
    while (scanf("%d", &n), n){
        for (i = 0; i < n; i++) scanf("%d", a + i);         
        
        ans = -200000;
        for (i = 0; i < n; i++){
            tmp = 0;
            for (j = i; j < n; j++){
                tmp += a[j];
                ans = fmax(tmp, ans);
            }
        }
        printf("%d\n", ans);
    } 
    return (0);
}