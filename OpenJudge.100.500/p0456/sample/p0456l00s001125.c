#include <stdio.h>
#include <string.h>
int main(void){
    char a[1000000], b[1000000];
    scanf("%s %s", a, b);
    int i, l, count = 0;
    l = strlen(a);
    for(i = 0; i < l; i++){
        if(a[i] != b[i]){
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}