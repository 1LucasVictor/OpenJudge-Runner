#include <stdio.h>

int main(void)
{
    int n;
    int i = 0;
    int A[101];

    while (scanf("%d", &n) != EOF){
        if (n != 0){
            A[i] = n;
            i++;
        }else{
            i--;
            printf("%d\n", A[i]);
        }
    }
    return (0);
}
