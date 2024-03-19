#include <stdio.h>
int main(void) {
    int n,a, b;
    int ans=0;
    scanf("%d%d", &a, &b);
    if(a>9 || b>9)
        printf("-1\n");
    else
        printf("%d\n",b*a);
    return 0;
}