#include <stdio.h>

int main(){
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);
    int how;
    how = c/a;
    printf("%d", b*how);
}