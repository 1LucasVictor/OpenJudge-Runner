#include<stdio.h>
int main(void)
{
    char s[20],t[20];
    scanf("%s %s",s,t);
    int i=0,cnt=0;
    while(t[i]){
        if(s[i]==t[i]){
            cnt++;
        }
        i++;
    }
    if(i-cnt==1){
        printf("Yes\n");
    }else{
    printf("No\n");
    }
    return 0;
}