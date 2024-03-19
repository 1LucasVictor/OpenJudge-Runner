#include<stdio.h>
#include<string.h>
int main(void)
{
    char s[11],t[12];
    int i=0,j=0;
    scanf("%s%s",s,t);
    while(s[i]!='\0'){
        if(s[i]==t[i])
            j++;
        i++;
    }
    if((j==i)&&(strlen(s)+1==strlen(t)))
        printf("Yes\n");
    else 
        printf("No\n");
    return 0;
}