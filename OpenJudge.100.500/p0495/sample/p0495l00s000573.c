#include <stdio.h>
int main(){
    char s[3];
    scanf("%s",s);
    int c;
    c=0;
    if(s[0] == s[1]){
        if(s[1] == s[2]){
            c=1;
        }
    }
    if(c==0){
        printf("Yes");
    }else{
        printf("No");
    }
    return 0;
}

