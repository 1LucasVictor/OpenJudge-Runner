#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(){
    int cnt_1=0,cnt=0,cnt_0=0,ans;
    char s[1000000];
    scanf("%s",s);
    for (int i=0; i<strlen(s); i++) {
        if (s[i]=='0') {
            cnt_0++; //0のカウント
        }else if(s[i]=='1'){
            cnt_1++;
        }
    }
    if (cnt_0>=cnt_1) {
        ans=cnt_1*2;
    }else{
        ans=cnt_0*2;
    }
    printf("%d\n", ans);
}