#include <stdio.h>

int main(void){

    char j, h, g;

    scanf("%c", &j);
    scanf("%c", &h);

    if(j != h){
        printf("Yes\n");
    }
    scanf("%c", &g);

    if(h==g){
        printf("No\n");
    }

    return 0;;

}