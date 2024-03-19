#include<stdio.h>

int main(void){

    char a[3];

    scanf("%c",&a[0]);
    scanf("%c",&a[1]);
    scanf("%c",&a[2]);

    a[1] == "R" ? printf("ABC") : printf("ARC");

    return 0;
}