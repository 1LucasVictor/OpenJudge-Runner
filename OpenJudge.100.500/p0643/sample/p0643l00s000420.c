#include <stdio.h>

int main(void)
{ 
    int a, b, ans;
    char str[12];    // 10000 10000\n
    fgets(str, sizeof(str), stdin);
    sscanf(str, "%d %d", &a, &b);
    
    if ( ((a*b) % 2) == 1 )
         printf("Odd");
   else
        printf("Even");

    return 0;
}