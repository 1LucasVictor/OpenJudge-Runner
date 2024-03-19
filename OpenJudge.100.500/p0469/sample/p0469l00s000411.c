#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int fact;
    int min,max;
    scanf("%d",&fact);
    scanf("%d %d",&min,&max);

    for (int i = min;i <= max;i++){
        if(i%fact == 0){
            printf("OK\n");
            return 0;
        }
    }
    printf("NG\n");

    return 0;
}