#include <stdio.h>
#include <string.h>
 
int main(void){
    char str[201] = { 0 };
    char str1[201] = { 0 };
    char str2[201] = { 0 };
    int n;
    int m;
    int h;
    int i;
 
    while (1){
        scanf("%s", str);
 
        if (strcmp(str, "-") == 0){
            break;
        }
 
        n = strlen(str);
 
        scanf("%d", &m);
 
        for (i = 0; i < m; i++){
            scanf("%d", &h);
            strncpy(str2, str, h);
            strncpy(str1, str+h, n - h);
            strcpy(str, strcat(str1, str2));
            memset(str1, '\0', n);
            memset(str2, '\0', h);
        }
     
        printf("%s\n", str);
        memset(str, '\0', n);
    }
 
    return 0;
}