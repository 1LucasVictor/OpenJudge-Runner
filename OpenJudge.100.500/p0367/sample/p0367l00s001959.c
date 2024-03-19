#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int a, b, c, i, count=0;
    scanf("%d %d %d", &a, &b, &c);
    for(i = a; i<=b; i++){
        if(c%i == 0) count++;
    }
    printf("%d\n", count);
    return 0;
}