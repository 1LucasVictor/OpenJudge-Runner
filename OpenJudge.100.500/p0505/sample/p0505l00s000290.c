#include <stdio.h>

int main(void){
    int h, n;
    int a[100000];
    int i,sum;
    
    scanf("%d %d", &h, &n);
    sum = 0;
    for(i = 0; i < n; i++){
        scanf("%d", &a[i]);
        sum += a[i];
    }
    
    if(sum >= h){
        puts("Yes");
    }else{
        puts("No");
    }
    
    return 0;
}