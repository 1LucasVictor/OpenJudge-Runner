#include <stdio.h>
int main() {
    int a,b,c,i;
    scanf("%d %d %d",&a,&b,&c);
    i = a + b + c;
    if (i == 17) {
        printf("YES");
    } else {
        printf("NO");
    }
    return 0;   
}