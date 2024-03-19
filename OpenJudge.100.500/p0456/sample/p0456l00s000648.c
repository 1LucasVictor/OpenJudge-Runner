#include<stdio.h>
#include<string.h>

int main(){
    unsigned char s[200001],t[200001];
    int cmd;
    scanf("%s",s);
    scanf("%s",t);

    for(int i=0;i<strlen(s);i++){
        if (s[i]!=t[i]){
            cmd++;
        }
    }
    printf("%d\n",cmd);

    return 0;
}