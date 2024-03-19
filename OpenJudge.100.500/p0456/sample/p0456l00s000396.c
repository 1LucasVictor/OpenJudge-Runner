#include<stdio.h>

int main(void){
    char s[20000];
    char t[20000];
    int count=0;
    int i=0;
    int nums,numt;
    scanf("%s",s);
    scanf("%s",t);
    while(s[i]!='\0'){
        if(s[i]!=t[i]){
            count++;
        }
        i++;
    }
    printf("%d",count);
    return 0;
}
