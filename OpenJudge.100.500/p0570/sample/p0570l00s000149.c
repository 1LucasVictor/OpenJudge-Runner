#include <stdio.h>
int main(void){
    int a, b, c, d, k = 0, flag = 1;
    
    scanf("%d %d", &a, &b);
    
    while(a > k || b > k){
        if(a - k > 0 && b - k > 0 && a - k == b - k){
            flag = 0;
            break;
        }
        if(a - k < 0){
            c = -1 * (a - k);
        }
        if(b - k < 0){
            d = -1 * (b - k);
        }
        
        if(a - k < 0 && b - k < 0 && c == d){
            flag = 0;
            break;
        }
        
        if(a - k < 0 && b - k > 0 && c == b - k){
            flag = 0;
            break;
        }
        
        if(a - k > 0 && b - k < 0 && a - k == d){
            flag = 0;
            break;
        }
        k = k + 1;
    }
    if(flag == 0){
        printf("%d\n", k);
    }else{
        printf("IMPOSSIBLE\n");
    }
    
}
