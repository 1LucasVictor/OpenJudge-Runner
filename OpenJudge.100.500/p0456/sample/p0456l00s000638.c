#include <stdio.h>
int main(){
    int c=0,i=0; 
    char s[200001],t[200001];
    scanf("%s%s",s,t);
    while(s[i]!='\0'){
        if(s[i]!=t[i])c++;
        i++;
    }
    printf("%d",c);
    return 0;
}