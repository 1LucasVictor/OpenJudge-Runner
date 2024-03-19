#include<stdio.h>
int main(){
    char e[4];
    scanf("%s",e);
    if(e[0]=='A'&&e[1]=='B'&&e[2]=='C')printf("ARC\n");
    else printf("ABC\n");
    return 0;
}