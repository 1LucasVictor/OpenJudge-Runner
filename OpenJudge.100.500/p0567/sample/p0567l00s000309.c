#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {

    int a,b,c;
    scanf("%d%d%d", &a, &b,&c);
    
    a-=b;
    printf("%d",(a<=c ? c-a : 0));

}
