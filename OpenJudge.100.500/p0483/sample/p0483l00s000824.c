#include <stdio.h>

int main(void){
    
    int i;
    char ch;
    
    for(i = 0; i<3; i++){
    ch = getchar();
        if(ch == '7'){
            printf("Yes\n");
            return 0;
        }
    }

    printf("No\n");

    return 0;

}