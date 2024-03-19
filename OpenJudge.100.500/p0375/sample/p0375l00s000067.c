#include <stdio.h>
#include <math.h>

void swap(int *x,int *y) {
    
    int tmp;
    
    tmp = *x;
    *x = *y;
    *y = tmp;
    
}

void call(int n) {
    int i = 1;
    
    while (1) {
        
        if (++i > n) {
            break;
        }
        
        if (i % 3 == 0) {
            printf(" %d",i);
            continue;
        }
        
        if (i % 10 == 3) {
            printf(" %d",i);
            continue;
        }
        
        int x = i;
        while (x > 10) {
            x /= 10;
            
            if (x % 3 == 3) {
                printf(" %d",i);
            }
        }
        
    }
}

int main(int argc, const char * argv[]) {
    
    int n;
    
    scanf("%d",&n);
    call(n);
    printf("\n");
    return 0;
}