#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>
int max(const void *a, const void *b){return *(int*)b - *(int*)a;}


int main(void)
{
    int a,b,c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);

    printf("%d\n", c- (a-b) < 0 ? 0 : c- (a-b));
    
    return 0;
}
