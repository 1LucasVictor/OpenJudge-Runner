#include <stdio.h>
#include <string.h>
int main(void){
    // Your code here!
    char str[21];
    char tmp[21];
    int i,idx,len;
    idx = 0;
    scanf("%s", str);

    len = strlen(str);

    for( i = len-1 ; i >= 0 ; i-- ){
        if( str[i] == '\0' ){
            break;
        }
        printf("%c", str[i]);
    }
    
    printf("\n");
}

