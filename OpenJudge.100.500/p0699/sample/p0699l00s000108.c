#include <stdio.h>
#include <stdlib.h>

#define STR_LEN 16
int main(void) {
    char str[STR_LEN];
    int chk[3] = {0};
    int i;
    char *p;
    int five=0,seven=0;

    p = fgets(str, STR_LEN, stdin);
    for(i=0;i<STR_LEN;i++){
        if(str[i] == ' '){
            str[i] = '\0';
            if(chk[0]) {
                chk[1] = atoi(p);
                chk[2] = atoi(&str[i+1]);
                break;
            } else {
                chk[0] = atoi(str);
                p = &str[i+1];
            }
        }
    }

    for(i=0;i<3;i++){
        if(chk[i] == 5)
            five++;
        else if(chk[i] == 7)
            seven++;
    }

    if(five == 2 && seven == 1){
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    

    return 0;
}
