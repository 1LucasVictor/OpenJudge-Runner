#include<stdio.h>
int main()
{
    int A,B;
    scanf("%d%d",&A,&B);
    int c = 1;
    A--;
    while(1)
    {
        if(A+1>=B) break;
        else A+=A;
        c++;
    }
    printf("%d\n",c);
}