#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdio.h>

long long Min(long long  a,long long  b){
    if(a<b )return a;
    return b;
}
int main()
{   int i,n;
    char s[100001];
    scanf("%s",s);
    int l=strlen(s),x=0,y=0;
    
    for(i=0;i<l;i++){
        if(s[i]=='1')x++;
        else y++;
    }
    printf("%d",Min(x,y)*2);
    return 0;
}
