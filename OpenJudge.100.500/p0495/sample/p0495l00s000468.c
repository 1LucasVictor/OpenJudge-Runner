#include<stdio.h>
 
char s[3];

int main(){
    scanf("%s",s);

    if(s[0]==s[1] && s[1]==s[2]){
        printf("No\n");
    }
    else{
        printf("Yes\n");
    }
    return 0;
}