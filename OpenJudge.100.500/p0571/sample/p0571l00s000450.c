#include <stdio.h>

int main(void){
    int n, a, b;
    
        char buf[256];
        fgets(buf,256,stdin);
        sscanf(buf, "%d %d %d", &n, &a, &b);
        if( n < 1| n > 20| a < 1| a > 50| b < 0| b >50){
            return 0;
        }else{
            
            int m;
            m = a * n;
            if(m > b){
                printf("%d\n", b);
            }else{
                printf("%d\n", m);
            }
        }

    return 0;
}