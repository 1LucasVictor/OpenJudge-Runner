#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

int main(void){

    char s[4];

    scanf("%s", s);

    int a = 0;
    
    a += (s[0] == '1');
    a += (s[1] == '1');
    a += (s[2] == '1');

    printf("%d\n", a);

    return 0;
}