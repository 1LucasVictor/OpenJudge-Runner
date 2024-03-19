#include <stdio.h>

int main()
{
    int a, b, n = 0, cont = 0;
    scanf("%d%d", &a, &b);
    while(a > cont) {
        if(b % 2 == 0) {
            if ((b % 3 != 0) && (b % 5 != 0)) {
                printf("DENIED");
                break;
                
            }else{
                ++n;
            }
        ++cont;
        }
    }
    
    if (n != 0){
        printf("APPROVED");
    }
    
    
    return 0;
}
