#include <stdio.h>

int checkcode(char *bango){
    int suuchi[4], i;

    for(i = 0; i < 4; i++){
        suuchi[i] = bango[i] - 48;
        if(i != 0)
            if(suuchi[i-1] == suuchi[i])
                return -1;
    }
    return 0;
    
}

int main(){
    char str[64];
    scanf("%s", str);
    int res = checkcode(str);
    switch(res){
        case -1:
            printf("Bad");
            break;
        case 0:
            printf("Good");
            break;
    }
    return 0;
}