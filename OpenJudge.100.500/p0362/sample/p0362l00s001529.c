#include <stdio.h>
int main(void){
    int a, b, c;
    0 <= a, b, c <= 100;
    scanf("%d %d %d",&a, &b, &c);
    if(a < b)
        if(b < c)
            printf("Yes\n");
    else
        printf("No\n");

    return 0;
}

