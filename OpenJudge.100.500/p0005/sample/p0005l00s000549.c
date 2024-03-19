#include<stdio.h>
#include<string.h>

int main (void)

{  char s[25];
int l,i;
    scanf("%s",&s);
    l=strlen(s);
    for(i=l-1;i>=0;i--)
        printf("%c",s[i]);
    printf("\n");

    return 0;
}

