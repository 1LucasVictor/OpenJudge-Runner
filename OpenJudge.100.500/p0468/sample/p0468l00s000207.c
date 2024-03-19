
 
        
#include <stdio.h>
#include <string.h>
 
int main(void)
{
    char S;    /* 入力文字列用 */
 
    
    scanf("%s",&S);          /* 文字列入力 */
 
    if(strcmp(&S, "ABC"))    /* 文字列比較 */
        printf("ABC");    /* 表示 */
    else
        printf("ARC");   /* 表示 */
    return(0);
}