#include <stdio.h>
#include <string.h>

int main(void)
{
    char x[3];
    char abc[] = "ABC";

    scanf("%s",x);

    if(strcmp(x,abc) == 0){
        printf("ARC\n");
    }else{
        printf("ABC\n");
        
    }

}