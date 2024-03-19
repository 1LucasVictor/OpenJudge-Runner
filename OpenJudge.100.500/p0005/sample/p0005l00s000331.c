#include<string.h>
#include<stdio.h>
int main()
{
    char str[20],i,len;
    scanf("%s",&str);
    len=strlen(str);
    for(i=len-1;i>=0;i--){
        printf("%c",str[i]);
    }
    printf("\n");
    return 0;
}

