#include<stdio.h>

int main()
{
    char code[5];
    scanf("%s", code);
    int flag=0;
    for(int i=0; i<3; i++)
    {
        if(code[i]==code[i+1])
            flag=1;
    }
    if(flag==0)
        printf("Good");
    else    
        printf("Bad");
    return 0;
}