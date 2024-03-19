#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(){
    int zero_count=0,count=0,one_count=0,ans;
    char s[10000];
    scanf("%s",s);
    for (int i=0; s[i]!='\0'; i++) {
        if (s[i]=='0') {
            zero_count++; //0のカウント
        }
        count++;
    }
    one_count=count-zero_count;
    if (zero_count>one_count) {
        ans=one_count*2;
    }else{
        ans=zero_count*2;
    }
    
    printf("%d\n", ans);
}