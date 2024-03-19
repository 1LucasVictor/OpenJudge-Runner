#include<stdio.h>
int main()
{
    int A,B;
    scanf("%d %d",&A,&B);
    if(A>=0&&B<=9)
    {
        if(A>=B)
           printf("10\n");
        else
            printf("0");
    }
}
