#include<stdio.h>
#include<stdlib.h>
int main()
{
    int X, A;
    scanf("%d %d", &X, &A);
    if(0<=X && X<=9 && 0<=A && A<=9 && X<A)
      {
        printf("0\n");
      }
    else if(X>=0 && X<=9 && 0<=A && A<=9 && X>A || X==A)
    {
    printf("10\n");
    }
    else
{

}
    return 0;
}
