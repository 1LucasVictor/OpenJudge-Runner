#include <stdio.h>
#include <ctype.h>
#define MAX 1202
 
int main(void){
    int i;
    char c[MAX];
 
    fgets(c, MAX, stdin);
 
    for(i = 0; c[i] != '\0'; i++){
        if(isalpha(c[i])){
            if(isupper(c[i])){
                printf("%c", tolower(c[i]));
            }
            else if(islower(c[i])){
                printf("%c", toupper(c[i]));
            }
        }
        else{
            printf("%c", c[i]);
        }
    }
    return 0;
}