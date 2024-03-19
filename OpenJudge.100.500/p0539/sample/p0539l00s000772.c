#include<stdio.h>
int main()
{
    int N;

    scanf("%d", &N);

    if(N<=9)
        printf("Yes\n");
    else if(N>9)
    {
        if(N/2<=9 && N%2==0)
        printf("Yes\n");
    else if(N/3<=9 && N%3==0)
        printf("Yes\n");
    else if(N/4<=9 && N%4==0)
        printf("Yes\n");
    else if(N/5<=9 && N%5==0)
        printf("Yes\n");
    else if(N/6<=9 && N%6==0)
        printf("Yes\n");
    else if(N/7<=9 && N%7==0)
        printf("Yes\n");
    else if(N/8<=9 && N%8==0)
        printf("Yes\n");
    else if(N/9<=9 && N%9==0)
        printf("Yes\n");
    else
         printf("No\n");
    }

    return 0;

}
