#include <stdio.h>
signed main(){
    char s[200000+1],t[200000+1];
    int i=0,w=0;
    scanf("%s %s",s,t);
    while(s[i]!='\0'){
        if(s[i]!=t[i]){
            w++;
        }
        i++;
    }
    printf("%d\n",w);
    return(0);
}