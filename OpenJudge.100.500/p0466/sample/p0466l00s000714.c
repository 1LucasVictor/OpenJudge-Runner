#include <stdio.h>
int main(void){
    int a=0;
    char s[11],t[12];
    scanf("%s %s",s,t);
    for(int i=0; s[i]!='\0';i++){
        if(s[i]!=t[i])
            a=1;
    }
    if(a==0)
        printf("Yes");
    else
        printf("No");
}
