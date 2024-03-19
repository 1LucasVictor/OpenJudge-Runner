#include<stdio.h>
int main(){
    int n,a,b,c,d,i,q=0,r=0,x;
    char s[200001];
    scanf("%d%d%d%d%d%s",&n,&b,&a,&c,&d,s);
    x=c>d?c:d;
    for(i=a;i<x;i++){
        r+=s[i]=='#'?1:-r;
        if(r>1){puts("No");return 0;}
    }
    if(d<c){
        r=0;
        for(i=b;i<d;i++){
            if(s[i]=='.')q++;
            else{
                if(q>r)r=q;
                q=0;
            }
        }    
        if(r<3){puts("No");return 0;}
    }
    puts("Yes");
    return 0;
}