#include<stdio.h>
int main(){
    char s[20],t[20];
    scanf("%s",s);
    scanf("%s",t);
    int i=0,temp;
    while(s[i]!='\0'){
        if(s[i]==t[i]) i++;
        else break;
    }
    if(t[i+1]=='\0') printf("Yes");
    else printf("No");
    return 0;
}