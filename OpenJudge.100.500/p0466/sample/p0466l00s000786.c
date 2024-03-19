#include <stdio.h>
#include <string.h>

int main(void)
{
    char s[11];
    char t[12];
    int flag=0;

    scanf("%s",s);
    // printf("s=%s\n",s);
    scanf("%s",t);
    // printf("t=%s\n",t);

    for (int i=0;i<strlen(s);i++){
        if (s[i]!=t[i])
            flag=1;
    }

    if (flag==0)
        printf("Yes");
    else
        printf("No");
    
    return 0;
    

}