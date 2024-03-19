#include <stdio.h>
#include <string.h>

int main(void)
{
    char s[4];
    scanf("%s", s);
    char a[4]="AAA";
    char b[4]="BBB";
    if(strcmp(s,a)==0||strcmp(s,b)==0){
        printf("No");
    }else{
        printf("Yes");
    }

    return 0;
}