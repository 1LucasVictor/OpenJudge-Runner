#include<stdio.h>
#include<string.h>

int main(void) {
    int a, b;
    char buf[16];
    
    while(scanf("%d %d", &a, &b) != EOF) {
        sprintf(buf, "%d", a+b);
        printf("%lu\n", strlen(buf));
    }
    
    return 0;
}