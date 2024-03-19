#include <stdio.h>

int main(){
    int n, x;
    int a, b ,c;
    int ans = 0;
    
    while(1){
        scanf("%d %d", &n, &x);
        if(n==0 && x==0) break;
        for(a=1; a<n; a++){
            for(b=a+1; b<n; b++){
                c = x-a-b;
                if(c>0 && c>b && c<=n) ans++;
            }
        }
        printf("%d\n", ans);
    }
    
}

