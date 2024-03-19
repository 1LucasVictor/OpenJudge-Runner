#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void){
    char str[4];
    int i;
    scanf("%s", str);
    i = strchr(str, '7');
    if (i != 0){
        printf("Yes\n");
    }else{
        printf("No\n");
    }
    return 0;
}
