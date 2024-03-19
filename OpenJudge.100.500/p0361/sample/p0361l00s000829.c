#include <stdio.h>
 
 
int main(int argc, char *argv[]) {
 
    int h = 0, m = 0, s = 0;
    int in = 0;
 
    scanf("%d", &in);
 
    h = in / 3600;
    m = ( in % 3600 ) / 60;
    s = ( in % 3600 ) % 60;
 
    printf("%d:%d:%d\n", h, m, s);
 
    return 0;
 
}