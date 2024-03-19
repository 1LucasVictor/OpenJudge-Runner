#include <stdio.h>
int main(void)
{
    int n, a, b;
    scanf("%d %d %d", &n, &a, &b);
    if((1 <= n)&&(n <= 20)&&(1 <= a)&&(a <= 50)&&(1 <= b)&&(b <= 50))
    {
        int train, taxi;
        train = n * a;
        taxi = b;
        if(train < taxi) printf("%d", train);
        else             printf("%d", taxi);
    }
}
