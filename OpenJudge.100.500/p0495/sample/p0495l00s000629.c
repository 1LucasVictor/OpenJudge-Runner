#include <stdio.h>

void main() {
    char palavra[3];
    fgets(palavra, 255, stdin);
    if(palavra[0] == 'A' && palavra[1] == 'B' || palavra[1] == 'B' && palavra[2] == 'C' || palavra[0] == 'B' && palavra[2] == 'A' ){
        printf("Yes\n");   
    }
    else{
        printf("No\n");
    }

}
