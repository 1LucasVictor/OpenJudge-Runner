#include <stdio.h>
#include <math.h>

int main(void)
{
    int i;
    int N;
    int a,b,c;
    int x;

    scanf("%d", &N);
    for (i = 0; i < N; i++){
        scanf("%d %d %d", &a, &b, &c);
        if (a > b){
            x = a;
            a = b;
            b = x;
        }
        if (b > c){
            x = b;
            b = c;
            c = x;
        }
        if (a > b){
            x = a;
            a = b;
            b = x;
        }
        if ((a * a) + (b * b) == (c * c)){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
    }

    return (0);
}


