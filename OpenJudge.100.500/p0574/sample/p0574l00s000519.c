#include <stdio.h>
int main(void){
    char S[5];
    scanf("%s%s%s%s",S);
    if((S[0]==S[1]) || (S[1]==S[2]) || (S[2]==S[3])){
        printf ("Bad");
    }
    else printf("Good");
}
