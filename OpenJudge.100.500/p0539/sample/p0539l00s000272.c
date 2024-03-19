#include <stdio.h>
int main(void){
    int n;
    scanf("%d\n", &n);

    for (int i = 9; i > 0; i--)
    {
        if ( (n % i == 0) && (n / i <= 9) )
        {
            printf("Yes\n");
            return(0);
        }
    }
    printf("No\n");
    
    return(0);
}