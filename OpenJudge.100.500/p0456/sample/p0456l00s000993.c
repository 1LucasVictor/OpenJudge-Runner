#include<stdio.h>
int main(void){
    char s[200000];
    char t[200000];
    int i;
    int count;
    scanf("%s",s);
    scanf("%s",t);
    count=0;
    for(i=0;s[i]!='\0';++i){
        if(s[i]!=t[i]){
            ++count;
        }
    }
    printf("%d\n",count);
    return 0;
}