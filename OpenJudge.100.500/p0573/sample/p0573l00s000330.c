#include <stdio.h>
#include <stdlib.h>
int main(){
    char s[5];
    int yn=0;
    scanf("%s",s);
    if(s[0]==s[1]){
        if(s[2]==s[3]&&s[0]!=s[2])yn=1;
    }else if(s[0]==s[2]){
        if(s[1]==s[3]&&s[0]!=s[1])yn=1;
    }else if(s[0]==s[3]){
        if(s[2]==s[1]&&s[0]!=s[2])yn=1;
    }
    if(yn==1){
        printf("Yes");
    }else{
        printf("No");
    }
    return 0;
}