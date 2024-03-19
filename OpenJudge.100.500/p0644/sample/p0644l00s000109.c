#include <stdio.h>
int main(){
    char s[9];
    int c=0,i=0;
    scanf("%s",s);
    for(;i<3;i++){
        if(s[i]=='1')
         c++;
    }
    printf("%d",c);
    return 0;
}