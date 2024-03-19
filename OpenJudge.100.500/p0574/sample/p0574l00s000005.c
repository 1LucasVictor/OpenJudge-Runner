#include<stdio.h>
int main()
{
    int i,j=0;
    char s[4];
    scanf("%s",s);
    for(i=0;i<4;i++){
        if(s[i]==s[i+1])
        j=1;
    }
    if(j==1)
        printf("Bad");
    else
        printf("Good");
    return 0;
}