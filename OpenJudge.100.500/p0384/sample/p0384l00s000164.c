#include <stdio.h>
#include <ctype.h>

int main(void) {
  
    char ch;
    
    while (1) {
        scanf("%c",&ch);
        if (ch == '\n') {
            break;
            }
        if(islower(ch)){
            ch = toupper(ch);
            printf("%c",ch);
        }else if(isupper(ch)){
            ch = tolower(ch);
            printf("%c",ch);
        }else{
              printf("%c",ch);
    }
        
    }
    printf("\n");
    return 0;
}