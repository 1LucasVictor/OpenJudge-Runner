#include<stdio.h>

int main()
{
    char num[4];

    scanf("%s",num);

    if(num[0]==num[1]||num[1]==num[2]||num[2]==num[3])
    {
        printf("Bad\n");
    }
    else
    {
        printf("Good\n");
    }


    return 0;
}
