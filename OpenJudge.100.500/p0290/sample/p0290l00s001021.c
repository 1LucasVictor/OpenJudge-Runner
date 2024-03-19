#include <stdio.h>
#include <math.h>

#define true (1)
#define false (0)

int prime_number(int);
int main(void)
{
    int n,a;
    int i;
    int sum;

    sum = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++){
        scanf("%d", &a);
        sum +=prime_number(a);
    }
    printf("%d\n", sum);

    return (0);
}
int prime_number(int a){
    int i,j;

    if (a == 2){
        return true;
    }else if (a < 2 || a % 2 == 0){
        return false;
    }else{
        i = 3;
        while (i <= sqrt((double)a)){
            if (a % i == 0){
                return false;
            }
            i = i + 2;
        }
    }
    return true;
}
