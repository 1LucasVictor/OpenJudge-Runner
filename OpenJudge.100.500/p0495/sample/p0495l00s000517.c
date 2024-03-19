#include <stdio.h>

int main(void){

    char j, h, g;

    scanf("%c", &j);
    scanf("%c", &h);

    if(j != h){
        printf("Yes\n");
    }
    scanf("%c", &g);

    if(h==g && h==j && g==j){
        printf("No\n");
    }else if(j!=g){
        printf("Yes\n");
    }

    return 0;

}