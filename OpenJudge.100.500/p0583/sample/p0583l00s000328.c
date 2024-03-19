#include<stdio.h>
int main(){
    int n,a,b,c,d,i,x;
    char s[200001];
    scanf("%d%d%d%d%d%s",&n,&a,&b,&c,&d,s);
    x=c>d?c:d;
    for(i=a;i<x;i++){
        if(s[i-1]=='#'&&s[i]=='#'){puts("No");return 0;}
    }
    if(d<c){
        for(i=b-1;i<d;i++){
            if(s[i-1]=='.'&&s[i]=='.'&&s[i+1]=='.'){puts("Yes");return 0;}
        }
        puts("No");
        return 0;
    }
    else puts("Yes");
    return 0;
}