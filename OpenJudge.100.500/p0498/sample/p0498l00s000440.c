#include <stdio.h>

int main(void){
    int page = 0, print = 0;
    scanf("%d", &page);
    if(page % 2 == 1){
        page = page / 2;
        print = page + 1;
    }else{
        print = page / 2;
    }
    printf("%d", print);

    return 0;
}