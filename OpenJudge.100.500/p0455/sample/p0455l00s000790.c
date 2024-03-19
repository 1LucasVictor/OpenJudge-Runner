#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){

    int a;
    char buf[30];


    fgets(buf, sizeof(buf), stdin);

    a = atoi(buf);
    if ((a<=10) & (a>=1)){
        a = a+pow(a,2)+pow(a,3);
        printf("%d\n", a);
    }
    return 0;
}