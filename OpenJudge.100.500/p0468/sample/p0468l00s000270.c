#include<stdio.h>
#include<string.h>
int main(){
    char S[3], b[]="ABC", c[]="ARC";
    scanf("%s",S);
    if(strcmp(S,b)==0)
        printf("%s",c);
    else
        printf("%s", b);
    return 0;
}
