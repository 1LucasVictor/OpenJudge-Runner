#include<stdio.h>
int main(void)
{
    char s[21];
    char a[21];
    int i;
    scanf("%s",s);
    for(i=0;i<20;i++){
        if(s[i]=='\0'){
            i-=1;
            break;
        }
    }
    for(;i>=0;i--){
        printf("%c",s[i]);
    }
    printf("\n");
    return 0;
}