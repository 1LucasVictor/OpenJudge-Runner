#include<stdio.h>
#include<string.h>
int main(){
    char s[10+1];
    char t[11+1];
    scanf("%s",s);
    scanf("%s",t);
    int len=strlen(s);
    int len1=strlen(t);
    for(int i=0;i<len;i++){
        if(s[i]==t[i]){
    
        }else if(s[i]!=t[i]){
            printf("No\n");
            return 0;
        }
    }
    if(len!=len1){
        printf("Yes\n");
    }
}