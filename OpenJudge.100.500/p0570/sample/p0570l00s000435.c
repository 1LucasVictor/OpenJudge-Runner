#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>
int max(const void *a, const void *b){return *(int*)b - *(int*)a;}


int main(void)
{
    int a,b;
    
    scanf("%d",&a);
    scanf("%d",&b);


    if((a+b)%2==1){
        printf("IMPOSSIBLE\n");
    }else{
        printf("%d\n", (a+b)/2);
    }
    
    return 0;
}
