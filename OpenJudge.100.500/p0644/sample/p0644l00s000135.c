#include <stdio.h>

int main(){
    char str[4];
    int a = 0;
    scanf("%s", str);

    if(str[0] == '1') a++;
    if(str[1] == '1') a++;
    if(str[2] == '1') a++;

    printf("%d\n", a);
    return 0;
}