#include <stdio.h>

int main(int argc, const char * argv[]) {
    int i,n, x;
    
    scanf("%d",&n);
    for(i=1; i<=n; i++) {
        x = i;
        if(x %3 == 0) {
            printf(" %d", i);//先頭に空白を出力
        }
        else
            if(x % 10 == 3) {
                printf(" %d", i);
            }
            else
                while(x != 0) {
                    x /=10;
                    if(x % 10 == 3) {
                        printf(" %d", i);
                        break;
            }
        }
        
    }
    printf("\n");
    
    return 0;
}
