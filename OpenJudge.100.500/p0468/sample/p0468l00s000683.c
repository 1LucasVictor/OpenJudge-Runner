#include <stdio.h>
 
int main(void) {
    char str[3];
    scanf("%s", str);
    
    if(strcmp(str,"ARC")){
        printf("ARC");
    }else{
        printf("ABC");
    }
 
    return 0;
}