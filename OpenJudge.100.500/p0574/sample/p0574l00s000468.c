
#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    char S[4]={};
    char value;
    scanf("%s",S);
    
    value=S[0];
    for (int i=1; i<4; i++) {
        if (value==S[i]) {
            printf("Bad");
            return 0;
        }else{
            value=S[i];
        }
    }

    printf("Good");
    return 0;
}
