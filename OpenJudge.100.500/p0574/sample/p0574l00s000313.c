#include<stdio.h>
int main(void){
    char s[5]={0};
    int i;
    int flag=1;
    scanf("%s",s);
    for(i=0;i<3;i++){
        if(s[i]==s[i+1]){
            flag=0;
        }
    }
    if(flag==0){
        printf("Bad");
    }else{
    printf("Good");
    }
    return 0;
}