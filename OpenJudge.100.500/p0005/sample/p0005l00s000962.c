#include<stdio.h>
#include<string.h>
int main(void){
    char str[21];
    char ans[21];
    int len,i;
    scanf("%s",str);
    len=strlen(str);
    for(i=0;i<len;i++){
        ans[i]=str[len-1-i];
    }
    ans[len]='\0';

    printf("%s\n",ans);

    return 0;
}