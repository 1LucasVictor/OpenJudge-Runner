#include <stdio.h>
#include <string.h>
 char exchange(char c)
 {
     if ('A' <= c && c <= 'Z'){
         return c + ('a' - 'A');
     }
     else if ('a' <= c && c <= 'z'){
         return c - ('a' - 'A');
     }
     else 
     return c;
 }
 
 int main(void){
    int i, len;
    char s[4096];  
    fgets(s, sizeof(s), stdin);
    len = strlen(s);   
    for(int i = 0; i < len;i++) {
        s[i] = exchange(s[i]);
    }
    printf("%s",s);
    
    return 0;
 }
 
