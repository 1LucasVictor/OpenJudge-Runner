#include <stdio.h>

int main(void){
    int num, i;
    int flag = 0;
    scanf("%d", &num);
    char moji[4];

    snprintf(moji, 4, "%d", num);


    for(i = 0; i < 3; i++){
        if(moji[i] == '7'){
            flag = 1;
        }
    }

    if(flag == 1){
        printf("Yes\n");
    }

    else printf("No\n");

    return 0;
    
}