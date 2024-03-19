#include<stdio.h>

int main()
{
    int N;

    scanf("%d", &N);

    if(N % 10 == 7){

    printf("Yes");

    }
    else {
        printf("No \n %d does not contain the digit 7.",N);
    }

    return 0;
}
