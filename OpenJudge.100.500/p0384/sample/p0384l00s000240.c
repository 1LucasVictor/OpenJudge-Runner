#include<stdio.h>
#include<ctype.h>
int main(void)
{
    char ch,CH;
    while(1){
        scanf("%c",&ch);
        CH = tolower(ch);
        if(ch==CH) CH = toupper(ch);
        printf ("%c",CH);
        if(ch=='\n')break;
    }
    //printf("\n");


    return 0;
}