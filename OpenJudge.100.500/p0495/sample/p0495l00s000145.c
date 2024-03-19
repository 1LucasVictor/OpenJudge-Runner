#include <stdio.h>

int main(){
    const unsigned int length_input = 3;
    char input_S[length_input+1];

    scanf("%s", input_S);
    /* printf("%s\n", input_S); */

    if((input_S[0] - input_S[1] == 0) && (input_S[1] - input_S[2] == 0 )){
        printf("No\n");
    }
    else{
        printf("Yes\n");
    }

    return(0);
}