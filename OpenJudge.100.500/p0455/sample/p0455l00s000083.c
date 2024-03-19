#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){
    int a;
    int t;
    char buf[30];

    fgets(buf, sizeof(buf), stdin);

    a = atoi(buf);
    t = a+a*a+a*a*a;
     
    printf("%d\n", t);
}