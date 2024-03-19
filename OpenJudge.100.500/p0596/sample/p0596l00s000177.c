#include<stdio.h>
#include<string.h>


int main(){
    int i,k=0,n,o=0,z=0;
    char s[10001];
    scanf("%s",s);
    n=strlen(s);
    for(i=0;i<n;i++){
        if(s[i]=='0')z+=2;
        else o+=2;
    }
    if(z>o)printf("%d\n",o);
    else printf("%d\n",z);
    return 0;
}

