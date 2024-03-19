#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ll long long

int main(){
    ll n;
    char s[5];
    scanf("%s",s);
    if(s[0]==s[1]&&s[1]==s[2]){
        printf("No");
        return 0;
    }else{
        printf("Yes");
        return 0;
    }
}