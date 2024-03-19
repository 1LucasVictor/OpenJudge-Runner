#include<stdio.h>
 
int main(void)
{
    int i = 0, a, b, c, n;
    while(scanf("%d %d", &a, &b) != -1){
        c = a + b;
        for(n = 0; c != 0; n++){
            c = c / 10;
        }
        printf("%d\n", n);
    }
    return 0;
}