#include <stdio.h>
int main(void){
    // Your code here!
    char str[100];
    scanf("%s", str);
    for(int i = 0; i < 3; i++){
        if(str[i] == str[i+1]){
            printf("Bad");
            return 0;
        }
    }
    printf("Good");
    return 0;
}
