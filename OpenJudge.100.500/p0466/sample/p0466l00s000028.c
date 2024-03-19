#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
int main(void){
    char s[11],t[12];
    scanf("%s%s",s,t);
    int a=strlen(s);
    if(strncmp(s,t,a)==0)
    printf("Yes");
    else
    {
        printf("No");
    }
    
    return 0;
}