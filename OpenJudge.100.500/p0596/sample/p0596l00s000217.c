#include<stdio.h>
#include<string.h>

typedef long long ll;

int main(){
    char s[100001];
    ll r=0,b=0;
    scanf("%s",s);
    for(int i=0;i<strlen(s);i++){
        if(s[i]=='0') r++;
        else b++;
    }
    printf("%lld",2*((r>b)?b:r));

    return 0;
}