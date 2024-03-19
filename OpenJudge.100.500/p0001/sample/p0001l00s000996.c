#include <stdio.h>

int main(void){
    int a,b,n,i;
    while(scanf("%d",&a) != EOF){
        scanf("%d",&b);
        n = a + b;
        i = 0;
        while (n != 0){
            i = i + 1;
            n = n/10;
        }
        printf("%d\n",i);
    }
    return 0;
}