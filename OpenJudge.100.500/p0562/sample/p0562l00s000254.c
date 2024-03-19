#include<stdio.h>
#include<stdlib.h>

int main () {
     int a, b;
     scanf("%d %d", &a, &b);
     printf("%d\n", b%a==0?(b/a):(b/a)+1);
     return 0;
}