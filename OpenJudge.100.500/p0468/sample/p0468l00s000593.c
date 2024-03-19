#include<stdio.h>
int main(){
    char S[3], b[]="ABC", i=0;
    scanf("%s", S);
    for(i=0; i<3; i++)
    {
        if(S[i]!=b[i])
            break;
    }
    if(i==3)
        printf("ARC");
    else
        printf("ABC");
    return 0;
}