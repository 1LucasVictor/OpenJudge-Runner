#include <stdio.h>
#include <string.h>
int main(void){
    char s[1000000], t[100000];
    int c=0, i;
    
    scanf("%s%s",s,t);
    
    for(i=0;i<strlen(s);i++){
        if(s[i]!=t[i]){
            s[i]=t[i];
            c++;
        }
    }
    printf("%d\n",c);
    return 0;
}