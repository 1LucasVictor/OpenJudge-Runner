#include <stdio.h>
int main(void){
    char str[4];
    scanf("%s", str);
    if(str[0] != str[1] || str[0] != str[2] || str[1] != str[2]){
        puts("Yes");
        return 0;
    }
    puts("No");
    return 0;
}