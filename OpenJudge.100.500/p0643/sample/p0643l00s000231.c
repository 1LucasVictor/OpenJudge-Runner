#include <stdio.h>

int main() {
    short a = 0,b = 0;
    scanf("%d %d",&a,&b);
    printf("%s\n",(a * b % 2)? "Odd" : "Even");
    return 0;
}
