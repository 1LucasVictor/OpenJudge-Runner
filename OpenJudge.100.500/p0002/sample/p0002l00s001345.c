#include <stdio.h>

int main(void)
{
    int n;
    int a, b, c;
    int i;

    scanf("%d", &n);
    for (i = 0; i < n; i++){
        scanf("%d %d %d", &a, &b, &c);

        if (a * a + b * b == c * c){
            printf("YES\n");
        }
        else if (b * b + c * c == a * a){
            printf("YES\n");
        }
        else if (c * c + a * b == b * b){
            printf("YES\n");
        }
        else {
            printf("NO\n");
        }
    }

    return (0);
}