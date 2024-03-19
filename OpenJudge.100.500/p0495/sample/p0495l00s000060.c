#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(void){
    char s[4];
    scanf("%s",s);
    if ((s[0] != s[1]) || (s[1] != s[2]))
    {
        printf("Yes\n");
        return 0;
    } else
    {
        printf("No\n");
        return 0;
    }
    
    
    return 0;  
}