#include <stdio.h>
int main(void){
    char ch;
    while(1){
        scanf("%c",&ch);
        if(ch>='a'&&ch<='z')printf("%c",(ch-32));
        else if(ch>='A'&&ch<='Z')printf("%c",(ch+32));
        else if(ch=='\n')break;
        else printf("%c",ch);
    };
     putchar('\n');
    return 0;
}

