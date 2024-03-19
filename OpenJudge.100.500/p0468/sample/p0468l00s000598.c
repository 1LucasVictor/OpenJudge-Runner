#include <stdio.h>
#include <stdlib.h>

int main(void) {

    char buf[10];
    
    scanf("%9s",buf);
    if(buf[1] == 'B'){
        printf("ARC\n");
    }else{
        printf("ABC\n");
    }

    return 0;
}