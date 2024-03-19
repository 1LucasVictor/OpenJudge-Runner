#include <stdio.h>

int main(void){
    // Your code here!
    int l,r;
    scanf("%d %d", &l, &r);

    
    int min = 2019;
    for(int i = l; i < r; i ++){
        for(int j = i+1; j <= r; j ++){
            int i2 = i%2019;
            int j2 = j%2019;
            if ( (i2*j2) % 2019 < min) min = (i2*j2) % 2019;
        }
    }
    printf("%d", min);
    return 0;
}