#include <stdio.h>


int main(void){
    
    char s[201],t[201];
    long int ans= 0;;
    scanf("%s\n",s);
    scanf("%s",t);

    for(int i = 0;s[i] != '\0';i++)
        if(s[i] != t[i]) ans ++;


    printf("%ld",ans);

    return 0;
}