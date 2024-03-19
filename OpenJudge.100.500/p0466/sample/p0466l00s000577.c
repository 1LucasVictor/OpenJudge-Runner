#include <stdio.h>
#include <string.h>

int main(void){

        char s[10],t[11];
        scanf("%s%s",s,t);
        int len1,len2;

        len1 = strlen(s) - 1;
        len2 = strlen(t) - 1;

        int judge = 0;

        for(int i=0;i<=len2-1;i++){
                if(s[i]!=t[i]){
                        break;
                }   
                if(i==len2-1){
                        judge = 1;
                }   
        }   

        if(judge==1){
                printf("Yes\n");
        }else{
                printf("No\n");
        }   
return 0;
} 