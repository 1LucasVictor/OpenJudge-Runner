#include <stdio.h>
#include <ctype.h>

int main(void)
{

    char moji;
    
    while(scanf("%c",&moji)!=EOF)
    {
        
        
            if(moji>='a' && moji<='z')
            {
                printf("%c",toupper(moji));
            }
            else if(moji>='A' && moji<='Z')
            {
                printf("%c",tolower(moji));
            }
            else printf("%c",moji);
        
    }
    
    return 0;
}


