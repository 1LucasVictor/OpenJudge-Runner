#include <stdio.h>
#include <string.h>

int main(){
    char str[20];
    int l;
    
    scanf("%s",str);
    l = strlen(str);
    for (l=l-1; l>=0; l--) {
        printf("%c",str[l]);
    }
    printf("\n");
    return 0;
}