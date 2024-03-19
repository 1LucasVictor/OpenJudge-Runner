#include <stdio.h>

int main(){
    int n, x;
    int a, b ,c;
    int ans;
    
    while(1){
        scanf("%d %d", &n, &x);
        if(n==0 && x==0) break;
        //int max;
        //if(x>n) max = n;
        //else max = x;
        ans = 0;
        for(a=1; a<=n; a++){
            for(b=a+1; b<=n; b++){
                c = x-a-b;
                if(c>b && c<=n) ans++;
            }
        }
        printf("%d\n", ans);
    }
    
}

