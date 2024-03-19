#include <stdio.h>
int main(void){
    int i = 0, cnt = 0;
    char s[3];
    scanf("%s", &s);
    
    for (i; i<4; i++){
        if (s[i] == 'A'){
            cnt++;
        }
    }
    if (cnt != 3 && cnt != 0){
        printf("Yes\n");
    }
    else {
        printf("No\n");
    }
    }


