#include <stdio.h>
int main(void){
    char c;
    
    while(fscanf(stdin,"%c",&c) != EOF){
        if('A' <= c && c <= 'Z'){
            c += 'a' - 'A';
            fprintf(stdout,"%c",c);
        }else if('a' <= c && c <= 'z'){
            c -= 'a' - 'A';
            fprintf(stdout,"%c",c);
        }else{
            fprintf(stdout,"%c",c);
        }
    }
    
    return 0;
}

