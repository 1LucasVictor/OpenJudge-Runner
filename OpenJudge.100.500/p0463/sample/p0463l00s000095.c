#include<stdio.h>

int main()

{
    int N, remainder;

    scanf("%d", &N);

    remainder = N%10;

    if(remainder==2 || remainder==4 || remainder==5 || remainder==7 || remainder==9)
        printf("hon\n");
    else if(remainder==0 || remainder==1 || remainder==6 || remainder==8)
        printf("pon\n");
    else if(remainder==3)
        printf("bon\n");

    return 0;

}
