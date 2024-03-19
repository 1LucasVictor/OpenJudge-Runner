/*
 * FileName:     A
 * CreatedDate:  2020-05-03 20:57:18 +0900
 * LastModified: 2020-05-03 21:01:56 +0900
 */

#include <stdio.h>
#include <string.h>
int main(void){
    char s[4];
    scanf("%s",s);
    if(strcmp(s,"ABC")==0){
        printf("ARC\n");
        return 0;
    }
    printf("ABC\n");
    return 0;
}
