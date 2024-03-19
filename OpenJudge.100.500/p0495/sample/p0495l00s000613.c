#include "stdio.h"
#include "string.h"

char s[4];

void main()
{
    scanf("%s",s);
    if(strcmp(s,"AAA")==0 ||strcmp(s,"BBB")==0){
        printf("No");
    }
    else{
        printf("Yes");
    }
}
