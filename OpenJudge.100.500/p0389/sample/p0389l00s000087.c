#include <stdio.h>
#include <ctype.h>
#define limitstr 201

int main(void){
    char pile[limitstr]={0}, buffer[limitstr]={0}, cutbuffer[limitstr]={0};
    int num=0, shuffle=0, index=0;
    
    
    for(;scanf("%s", pile) && strcmp("-", pile);){
        for(index=0, scanf("%d", &num); num > index && scanf("%d", &shuffle); index++){
            strncpy(buffer, pile, shuffle);
            strncpy(cutbuffer, &(pile[shuffle]), strlen(pile)-shuffle);
            strncpy(pile, cutbuffer, limitstr);
            strncat(pile, buffer, shuffle);
            
            strncpy(buffer, "\0", limitstr);
            strncpy(cutbuffer, "\0", limitstr);
        }
        
        printf("%s\n", pile);
    }
    
    return 0;
}