
#include<stdio.h>

int main (void){
    char str[21] = "";
    int i = 0;

    scanf("%s",str);

    while(1){

        if(str[i] == NULL)
            break;
            i++;
    }

    while(1){

        i--;
        printf("%c",str[i]);
        if(i == 0){
            printf("\n");
            break;
        }
    }

    return 0;
}