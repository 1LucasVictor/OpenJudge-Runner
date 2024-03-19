#include <stdio.h>

int main(void) {
    
    char char_input[4];

    scanf("%s", &char_input);

    if (char_input[0] == char_input[1] && char_input[1] == char_input[2] && char_input[0] == char_input[2])
    {
        printf("No");
    } else
    {
        printf("Yes");
    }
    
}