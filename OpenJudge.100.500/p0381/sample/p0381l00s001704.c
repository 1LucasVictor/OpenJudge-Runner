#include <stdio.h>
int main(void){
    
    int a,b,c,cnt = 0;
    int x,n;
    
    while(1){
        scanf("%d %d",&n,&x);
        if(n == 0 && x == 0) break;
        for(a = 1; a <= n-2; a++){
            for(b = a+1; b <= n-1; b++){
                for(c = b+1; c <= n; c++){
                    if(x == a+b+c) cnt++;
                }
            }
        }
         printf("%d\n",cnt);
         cnt = 0;
    }
    
}