#include <stdio.h>
#include <string.h>

int main(void)
{
    int i,len;
    char str[1220];
    
    scanf("%[^\n]",str);
    len=strlen(str);
    
    for(i=0;i<len;i++){
        if('A'<=str[i] && str[i]<='Z'){
            str[i]+=32;
        }else if('a'<=str[i] && str[i]<='z'){
            str[i]-=32;
        }
    }
    printf("%s\n",str);
    return 0;
}

