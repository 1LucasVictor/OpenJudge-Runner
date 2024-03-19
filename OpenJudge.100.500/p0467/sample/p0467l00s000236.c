#include <stdio.h>


int main(void)
{
    int a, b, c, k;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &k);

        if(k <= (a + b)){
            printf("%d\n", a);
        }
        else{
            printf("%d\n", a-(k-a-b));
        }
    return 0;
}