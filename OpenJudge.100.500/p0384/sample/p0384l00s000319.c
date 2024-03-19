#include<stdio.h>
#include<string.h>

int main(){
    char s[1200];
    int n;
    
    scanf("%[^\n]",s);
    
    for(n=0;n<=strlen(s);n++){
        if(s[n]>=97&&s[n]<=122){
            s[n]=s[n]-32;
        }else if(s[n]>=65&&s[n]<=90){
            s[n]=s[n]+32;
        }
    }
    
    printf("%s\n",s);
    
    return 0;
}
