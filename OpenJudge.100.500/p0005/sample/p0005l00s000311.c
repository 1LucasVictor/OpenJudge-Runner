#include<stdio.h>
#include<stdlib.h>
int main(){
    //char str[21], tmp[21];
    char *str = NULL;
    int i;
    size_t n = 0;
    ssize_t len;
    len = getline(&str, &n, stdin);
    for (i=len-2; i>=0; i--)
        printf("%c", str[i]);
        //str[j] = tmp[i];
    //printf("%s\n", str);
    puts("");
    free(str);
    return 0;
}