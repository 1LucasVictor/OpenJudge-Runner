#include<stdio.h>
int main()
{
    int a, b, c,i, j=1, x[101];

    scanf("%d %d %d", &a, &b, &c);

    for(i=1; i<=100; i++){
        if(a%i==0 && b%i==0){
            x[j] = i;
            j++;
        }
    }

    printf("%d\n", x[c]);

    return 0;
}
