#include<stdio.h>
char n[4];
int main(){
    scanf("%s",n);
    for(int i=0;n[i]!='\0';i++)if(n[i]=='7'){puts("Yes");return 0;}
    puts("No");
    return 0;
}