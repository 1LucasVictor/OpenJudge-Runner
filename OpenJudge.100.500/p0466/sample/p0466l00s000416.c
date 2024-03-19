#include<stdio.h>
#include<string.h>
int main(){
    char s[11],t[12];
    scanf("%s",s);
    scanf("%s",t);
    int k=strncmp(s,t,strlen(s));
    if(k==0 && strlen(s)+1==strlen(t)){
        printf("Yes\n");
    }else{
        printf("No\n");
    }
    
    return 0;
}