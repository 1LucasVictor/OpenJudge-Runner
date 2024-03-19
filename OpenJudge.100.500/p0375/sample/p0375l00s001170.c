#include<stdio.h>

int main(void)
{
    int i, x, n;
    
    scanf("%d", &n);
    
    for ( i=1; i<=n; ++i) {
        x = i;
        
        if ( x%3 == 0)
            printf(" %d", i);
        else{
            do{
                if ( x%10 == 3) {
                    printf(" %d", i);
                    break;
                }
            }while( (x = x/10) != 0);
        }
    }
    putchar('\n');
    
    return 0;
}
