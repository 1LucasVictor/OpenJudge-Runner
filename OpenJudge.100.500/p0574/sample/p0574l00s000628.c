#include<stdio.h>
#include<string.h>
int main()
{
    char S[4];
    scanf("%s",S);
        if((S[0]!=S[1] && S[1]!=S[2]) && S[2]!=S[3] )
            {
            printf("Good\n");
        }
        else
            printf("Bad\n");




    return 0;
}
