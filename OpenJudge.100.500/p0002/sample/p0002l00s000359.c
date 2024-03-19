#include <stdio.h>

int main(void)
{
    int i, n, a, b, c;

    scanf("%d", &n);

    for (i = 0; i < n; i++){
        scanf("%d %d %d", &a, &b, &c);

        if (a >= b && a >= c){
            b = b * b + c * c; 
           // printf("%d", b);
            if (a*a == b){
                printf("YES\n");
            }else {
                printf("NO\n");
            }
        }else if (b >= a && b >= c){
            a = a * a + c * c; 
            //printf("%d", a);
            if (b * b == a){
                printf("YES\n");
            }else {
                printf("NO\n");
            }
        }else if (c >= a && c >= b){
            a = a * a + b * b; 
            //printf("%d", a);
            if (c * c == a){
                printf("YES\n");
            }else {
                printf("NO\n");
            }
        }
    }

    return (0);
}

