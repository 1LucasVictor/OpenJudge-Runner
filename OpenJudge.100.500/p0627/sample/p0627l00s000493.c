#include <stdio.h>
int main(void){
    int a, b, tasu, hiku, kakeru;
    scanf("%d%d", &a,&b);
    
    tasu = a + b;
    hiku = a - b;
    kakeru = a * b;
    
    if(tasu >= hiku && tasu >= kakeru){
        printf("%d", tasu);
    }
    if(hiku >= tasu && hiku >= kakeru){
        printf("%d", hiku);
    }
    if(kakeru >= tasu && kakeru >= hiku){
        printf("%d", kakeru);
    }
        
}