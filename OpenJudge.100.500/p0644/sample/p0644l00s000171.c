#include <stdio.h>

int main(void){
    char s[3];
    int count=0,i;
    scanf("%s",s);
    for(i=0;i<3;i++){
        if(s[i]=='1'){
            count++;
        }
    }
    printf("%d\n",count);
    return 0;
}