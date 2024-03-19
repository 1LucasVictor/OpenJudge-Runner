#include <stdio.h>
#include <ctype.h>


int main(int argc, const char * argv[]) {
    char c;
    while(1){
        scanf("%c",&c);
        if(islower(c)){
            c = toupper(c);
        }else if(isupper(c)){
            c = tolower(c);
        }else if(c == '.'){
            printf(".\n");
            break;
        }else if(c == '  '){
            break;
        }
        printf("%c",c);
        
    }
    return 0;
}