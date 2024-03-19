#include <stdio.h>
int main(void){
    int count=0;
    char s[3];
    scanf("%s",s);
    for(int i=0;i<=2;i++){
        if(s[i]=='1') count++;
    }
    printf("%d",count);
    return 0;
}