#include<stdio.h>

int main(void){
    char s[5],a;
    int i,num1=0,num2=-1,flag=0;
    scanf("%s",s);
    for(i=1;i<4;i++){
        if(s[i]!=s[0]&&flag==0){
            a=s[i];
            flag=1;
        }
        if(s[0]==s[i]){
            num1++;
        }else if(s[i]==a){
            num2++;
        }
    }
    if(num1==1&&num2==1){
        printf("Yes\n");
    }else{
        printf("No\n");
    }
    //printf("%c\n",a);
    return 0;
}
