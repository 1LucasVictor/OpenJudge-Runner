#include <stdio.h>
 
int main(){
    int n, x;
    int a, b, c, ans;
    while(1){
        scanf("%d%d", &n, &x);
        if(n == 0 && x == 0){break;}
         
        ans = 0;
for(a = 1; a <= n; a++){
for(b = a; b <= n; b++){
for(c = b; c <= n; c++){
if(a == b || b == c || c == a){
continue;
                    }
                    if(x == a + b + c){
                 //       printf("%d,%d,%d\n",a,b,c);
                        ans++;
                    }
                }
            }    
        }
         
        printf("%d\n",ans);
    }
    return 0;
}