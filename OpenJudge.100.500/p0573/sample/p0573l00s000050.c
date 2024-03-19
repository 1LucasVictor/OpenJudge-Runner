#include <stdio.h>

int main(void) {
    int i;
    int count = 0;
    char S[4] = {};

    for(i = 0; i < 4; i++) {
        scanf("%c",&S[i]);
    }
     
    for(i = 0; i < 3; i++) {
        if(S[i] == S[i+1] || S[i] == S[i+1] || S[i] == S[i+2] || S[i] == S[i+3]) {
        count += 1;
        }
    }

    if(count == 2) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }
    
    return 0;
}