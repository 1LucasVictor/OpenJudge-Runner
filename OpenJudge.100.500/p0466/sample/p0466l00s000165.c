#include<stdio.h>
int i;
char s[11],t[12];
int main(){
    scanf("%s%s",s,t);
    for(i=0;s[i]!='\0';i++){
        if(s[i]!=t[i]){puts("No");return 0;}
    }
    puts("Yes");
    return 0;
}