#include <stdio.h>
#include<string.h>

int main(void)
{
    char str[4];

    scanf("%s", str);

    if(strcmp(str, "ABC") == 0){
        printf("ARC");
    }
    else{
        printf("ABC");
    }
    return 0;
}
