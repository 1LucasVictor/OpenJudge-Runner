#include <stdio.h>
#include <string.h>
int main(){
    char s[1201];
    for(int i=0; i< 1201; i++){
        scanf("%c", &s[i]);
        if(s[i]=='\n'){
            s[i]='\0';
            break;
        }
    }
    int n = strlen(s);
    for(int i=0; i<n ; i++){
        if(s[i]<='z' && s[i]>='a') s[i]-= 32;
        else if(s[i]<='Z' && s[i]>='A') s[i]+= 32;
    }
    puts(s);
}

