#include<stdio.h>
#include<string.h>
 
int main(){
    int a, b;
    char c[16];
 
    while(scanf("%d %d", &a, &b) != EOF) {
        sprintf(c, "%d", a+b);
        printf("%d\n", strlen(c));
    }
    return 0;
}