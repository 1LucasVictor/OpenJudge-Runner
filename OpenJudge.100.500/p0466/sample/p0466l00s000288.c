#include<stdio.h>

int main(){
    char s[10];
    char t[10];
    int i,a,b;
    scanf("%s",s);
    scanf("%s",t);
    a=0;
    b=0;
    for(i=0;s[i]!='\0';i++){
        if(s[i]!=t[i]){
            a=1;
        }
        if(s[i+1]!=t[i+1]){
            b=1;
        }
        if(s[i+1]==t[i+1]){
            b=0;
        }
    }
    if(a==0&&b==1){
        printf("Yes");
    }else{
        printf("No");
    }

}