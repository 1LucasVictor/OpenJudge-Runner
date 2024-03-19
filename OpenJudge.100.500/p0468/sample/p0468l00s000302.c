#include<stdio.h>
#include<string.h>
int main(void){
    char s[4],s1[4]="ABC";
    scanf("%s",s);
    if(strcmp(s,s1)==0)
    printf("ARC");
    else
    {
        printf("ABC");
    }
    return 0;
}