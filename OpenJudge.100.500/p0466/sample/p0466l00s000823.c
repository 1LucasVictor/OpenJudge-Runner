#include <stdio.h>
#include <string.h>
int main(void)
{
    char s[10],t[11];
    scanf("%s",s);
    scanf("%s",t);

    int flg=1;
    for(int i=0;*(s+i)!='\0';i++){
        if (*(s+i)!=*(t+i)){flg=0; break;}
    }
    if(flg){printf("Yes\n");}
    else{printf("No\n");}
    return 0;
}