#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    char str[5];
    
    scanf("%s", str);
    str[4] = '\0';
    if (str[0] == str[1] || str[1] == str[2] || str[2] == str[3]){
        printf("Bad\n");
        return 0;
    }
    printf("Good\n");
    return 0;
}
