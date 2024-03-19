#include<stdio.h>
int main()
{
    int N, c;
    scanf("%d", &N);
    c=N%10;
    if(c==2||c==4||c==5||c==7||c==9)
    {
        printf("hon\n");
    }
    if(c==0||c==1||c==6||c==8)
    {
        printf("pon\n");
    }
    if(c==3)
    {
        printf("bon\n");
    }

    return 0;
}
