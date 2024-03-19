#include<stdio.h>
int main()
{
    int i,c=0;
    char s[5];
    scanf("%s",s);
    for(i=0;i<3;i++)
        if(s[i]==s[i+1])
        c++;
    if(c)
        printf("Bad\n");
    else
        printf("Good\n");
    return 0;
}
