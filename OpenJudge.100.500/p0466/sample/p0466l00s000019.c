#include <stdio.h>
#include<string.h>

int main() {
    
    char s[11],t1[12];
    
    scanf("%s",s);
    scanf("%s",t1);
    if(memcmp(s,t1,strlen(s))==0&&strlen(s)+1==strlen(t1))
    {
            printf("\nYes");
    }else{
        printf("\nNo");
    }
    
    
    return 0;
}
