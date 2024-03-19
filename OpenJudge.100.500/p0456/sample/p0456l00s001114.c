#include<stdio.h>
#include<string.h>

int main(){
    char s[200000];
    char t[200000];
    scanf("%s",s);
    scanf("%s",t);
    int ans = 0;
    for(int i=0;i<strlen(s);i++){
        if(s[i]!=t[i]){
            ans ++;
        }
    }
    printf("%d\n",ans);
}