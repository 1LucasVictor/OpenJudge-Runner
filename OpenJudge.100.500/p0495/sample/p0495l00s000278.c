#include <stdio.h>
#include <string.h>

int main(){
    char txt[3];
    scanf("%s",txt);
    if(strchr(txt, (int)'A') !=NULL && strchr(txt, (int)'B') !=NULL)
    {
        printf("Yes");
    }else{
        printf("No");
    }
    return 0;
}