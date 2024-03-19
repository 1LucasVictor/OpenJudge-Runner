#include <stdio.h>
#include <string.h>

void erase(int ptr);
void count();

char s[100000];
int cou = 0;

int main(void){

    scanf("%s", s);
    
    count();

    printf("%d", cou);
}


void erase(int ptr)
{
    while(ptr < strlen(s)-2){
        s[ptr] = s[ptr+2];
        ptr++;
    }
    
    s[strlen(s)-2] = '\0';
    cou+=2;
}

void count(){
    for(int i=0; i<strlen(s); i++){
        if((s[i]=='0' && s[i+1]=='1')  || (s[i]=='1' && s[i+1]=='0') ){
            erase(i);
            count();
        }
    }
}