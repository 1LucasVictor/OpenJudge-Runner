#include <stdio.h>
#include <string.h>
int min(int n,int m){
    if(n<m) return n;
    else return m;
}
int main(void){
    char s[100001];
    int a=0,b=0;
    scanf("%s",s);
    for(int i=0;i<strlen(s);i++){
        if(s[i]=='0') a++;
        else b++;
    }
    printf("%d",min(a,b)*2);
}