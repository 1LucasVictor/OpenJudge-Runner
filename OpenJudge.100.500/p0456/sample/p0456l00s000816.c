#include <stdio.h>
int main(void){
    int ans=0;
    char s[2*10*10*10*10*10];
    char t[2*10*10*10*10*10];
    scanf("%s",s);
    scanf("%s",t);
    int n;
    for(int i=0;s[i]!='\0';++i){
        n++;
    }
    for(int i=0;i<n;i++){
        if(s[i]!=t[i])ans++;
    }
    printf("%d",ans);
}