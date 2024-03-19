#include<stdio.h>
int main()
{
    int A,B,T;
    scanf("%d %d %d", &A, &B, &T);
    int s=(T/A)*B;
    printf("%d\n",s);
    return 0;
}