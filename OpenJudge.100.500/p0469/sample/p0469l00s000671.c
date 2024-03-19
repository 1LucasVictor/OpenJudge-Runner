#include <stdio.h>

int main(void){
        int a;
        int b;
        int k;

        scanf("%d %d %d",&k,&a,&b);

        int max =(b/k) * k;

        if (a <= max){
                printf("OK\n");
        }
        else {
                printf("NG\n");
        }
        return 0;
}
