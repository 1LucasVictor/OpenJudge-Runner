#include <stdio.h>
 
int main(void){
    // Your code here!
    int l,r;
    scanf("%d %d", &l, &r);
 
    l %= 2019;
    while(r -l -2019 > 0) r -= 2019;
    
    int min = 2019;
    for(int i = l; i < r; i ++){
        for(int j = i+1; j <= r; j ++){
            if ( (i*j) % 2019 < min) min = (i*j) % 2019;
        }
    }
    printf("%d", min);
    return 0;
}