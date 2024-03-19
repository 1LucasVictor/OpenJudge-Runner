
#include <stdio.h>

int main(){
    char s[4];
    int i, check = 0;

    scanf("%s", s);

    for(i=0; i<3; i++){
        if(s[i] == s[i+1])
            check++;
    }

    if(check == 0)
        printf("Good\n");
    else
        printf("Bad\n");
    
    return 0;
}