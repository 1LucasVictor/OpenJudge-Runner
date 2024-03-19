#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    int a,b;
    scanf("%i %i", &a, &b);
    puts((a * b % 2) ? "Odd": "Even");
    return 0;
}