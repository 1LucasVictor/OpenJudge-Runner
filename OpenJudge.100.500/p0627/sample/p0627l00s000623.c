#include <stdio.h>

int main()
{
	int A, B, soma, sub, mult;
    scanf("%d %d", &A, &B);
    soma = A + B;
    sub = A - B;
    mult = A * B;
    if(soma > sub && soma > mult)
        printf("%d\n", soma);
    else if(sub > soma && sub > mult)
        printf("%d\n", sub);
    else
        printf("%d\n", mult);
}


