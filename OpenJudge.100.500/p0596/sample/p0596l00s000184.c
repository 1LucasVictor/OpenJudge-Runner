#include<stdio.h>
#include<string.h>

int main(void){
    int i,cnt0,cnt1;
    char s[100010];
    cnt0 = 0;
    cnt1 = 0;

    scanf("%s",s);

    for(i=0; i<strlen(s); i++){
        if(s[i] == '0'){
            cnt0++;
        }else if(s[i] == '1'){
            cnt1++;
        }
    }

    if(cnt0 > cnt1){
        printf("%d\n",cnt1 * 2);
    }else if(cnt1 >= cnt0){
        printf("%d\n",cnt0 * 2);
    }
    return 0;
}