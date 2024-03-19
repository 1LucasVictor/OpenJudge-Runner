#include<stdio.h>
#include<string.h>
int main(){
    char s[100000+1];
    char t[100000+1];
    int count=0;
    scanf("%s",s);
    scanf("%s",t);
    for(int i=0;i<strlen(s);i++){
        if(s[i]==t[i]){
            continue;
        }else{
            count=count+1;
        }
    }
    printf("%d\n",count);
}