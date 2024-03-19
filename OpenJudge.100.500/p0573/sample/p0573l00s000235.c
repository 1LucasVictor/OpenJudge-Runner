#include<stdio.h>
int main(){
    char s[5];//,baff1,baff2,baff3,baff4;
    int cnt = 1,cnt0 = 1;
    scanf("%s",s);

    // baff1 = s[0];
    // baff2 = s[1];
    // baff3 = s[2];
    for(int i =1;i<4;i++){
        if(s[i] == s[0]){
            cnt++; //使用されている文字種のカウント
        }
    }
    // printf("cnt:%d\n",cnt);

    if(cnt == 2){
        for(int i = 1;i<4;i++){
            if(s[0] == s[i]){
                cnt0++;
            }
        }
        // printf("cnt0:%d\n",cnt0);
        if(cnt0 == 2){
            printf("Yes\n");
            return 0;
        }else{
            printf("No\n");
            return 0;
        }
    }
    printf("No\n");

    return 0;
}