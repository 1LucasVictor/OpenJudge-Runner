#include<stdio.h>
int main(void)
{ 
    char S[5];
    scanf("%s",S);
   
    if(S[0]==S[1]) printf("Bad\n");
    else if(S[1]==S[2]) printf("Bad\n");
    else if(S[2]==S[3]) printf("Bad\n");
    else printf("Good\n");
    return 0;
}