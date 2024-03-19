#include<stdio.h>

// SUB ID: UG02-53-20-001

int main()
{
    int A, B;
    scanf("%d%d",&A,&B);

    if(B%A==0)
    {
        printf("%d",A+B);

    }  else

    {
            printf("%d",B-A);
    }


    return 0;
}