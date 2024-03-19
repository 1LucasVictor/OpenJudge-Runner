#include<stdio.h>

int main(void)
{
    int N;
    scanf("%d",&N);
    int last=N%10;
    if(last==2 || last==4 || last==5 || last==7 || last==9)
        printf("hon");
    else if(last==0 || last==1 || last==6 || last==8)
        printf("pon");
    else
        printf("bon");


    return 0;
}
