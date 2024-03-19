#include<stdio.h>
#include<string.h>
int main(){
    char s[15];
    char t[15];
    scanf("%s",s);
    scanf("%s",t);
    int n=strlen(s);
    for(int i=0;i<n;i++){
        if(s[i]!=t[i]){
            printf("No");
            return 0;
        }
    }
    printf("Yes");
    return 0;
}