#include<stdio.h>
int main(){
    int n,a,b,c,d,i,q=0,r=0,x;
    char s[200001];
    scanf("%d%d%d%d%d%s",&n,&b,&a,&c,&d,s);
    x=c>d?c:d;
    for(i=a;i<x;i++){
        if(s[i]=='#')r++;
        else r=0;
        if(r>1){puts("No");return 0;}
    }
    if(d<c){
        r=0;
        for(i=b-1;i<d;i++){
            if(s[i-1]=='.'&&s[i]=='.'&&s[i+1]=='.'){puts("Yes");return 0;}
        }
        puts("No");
        return 0;
    }
    else puts("Yes");
    return 0;
}