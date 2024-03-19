#include<stdio.h>
#include<ctype.h>
int main(void){
    char moji;
    while(1)
    {
        scanf("%c",&moji);
        if(moji == '\n') break;
        else if(isupper(moji))  moji = tolower(moji);
        else if(islower(moji))  moji = toupper(moji);
        putchar(moji);
    }
    printf("\n");
}
