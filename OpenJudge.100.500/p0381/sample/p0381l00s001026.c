#include<stdio.h>

int main(){

    int x,n,c;
    c = 0;
    
    scanf("%d %d\n",&n,&x);
    while (x != 0 && n != 0) {
        for (int i = 1; i <= n; i++) {
            for (int j = i + 1; j <= n; j++) {
                for (int k = j + 1; k <= n; k++) {
                    if (i+j+k == x)
                        c++;
                 }
             }
         }
        scanf("%d %d\n",&x,&n);
        printf("%d\n",c);
    }
    
    return 0;
}
