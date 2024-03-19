#include <stdio.h>
int main(void){
    int N, ans;
    
    ans = 0;
    scanf("%d", &N);
    
    if(N%2 != 0){
        ans = (N/2)+1;
    } else if(N%2 == 0){
        ans = N/2;
    }
    
    printf("%d\n", ans);
    
}
