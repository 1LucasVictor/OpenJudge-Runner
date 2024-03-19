#include <stdio.h>


int main (void){
    char s[4];
    int answer = 0;
    scanf("%s",&s);
    if(s[0] == 'A'){
        if(s[1] == 'B' || s[2] == 'B') answer = 1;
    }else{
        if(s[1] == 'A' || s[2] == 'A') answer = 1;
    }
    if(answer == 1) printf("Yes");
    else printf("No");
    return 0;
}