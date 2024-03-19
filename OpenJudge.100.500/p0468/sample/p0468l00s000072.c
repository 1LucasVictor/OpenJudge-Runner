#include<stdio.h>
#include<string.h>
int main(void){
char S[100];
scanf("%s",S);
if(S[1]=='B') printf("ARC\n");
else if(S[1]=='R') printf("ABC\n");
return 0;
}