#include <stdio.h>

int main(int argc, const char * argv[]) {
    int x, a;
    x = argv[1];
    a = argv[2];
    if(x<a){printf("0\n");}
    else{printf("10\n");}
    return 0;
}