#include<stdio.h>

int main(void){
    int a, b, c;
    int i;
    int ans = 0;
    scanf("%d %d %d", &a, &b, &c);
    
    for(i=a; i<=b; i++){
        if(c%i ==0) ans++;
    }
    
    printf("%d\n", ans);
    
}