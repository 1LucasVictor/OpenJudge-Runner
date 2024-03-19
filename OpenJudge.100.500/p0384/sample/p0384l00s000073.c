#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main(void){

    int i,len;
    char str[1201] ;


    fgets(str,1201,stdin);
    len =strlen(str);

    for(i = 0; i < len; i++){
        if(!isupper(str[i])){
            str[i] = toupper(str[i]);
        }else{
            str[i] = tolower(str[i]);
        }
    }

    fputs(str,stdout);
    
    return 0;
    }