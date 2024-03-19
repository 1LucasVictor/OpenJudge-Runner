#include<stdio.h>
int main(void){
    char s[2][200000];
    int i;
    int count=0;
    for(i=0;i<2;++i){
        scanf("%s",s[i]);
    }
    for(i=0;s[0][i]!='\0';++i){
        if(s[0][i]!=s[1][i]){
            ++count;
        }
    }
    printf("%d\n",count);
    return 0;
}