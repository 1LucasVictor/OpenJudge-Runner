#include<stdio.h>
#include<string.h>
int main(void){
    char code[5];
    int cnt=0;
    for(int j=0;j<4;j++){scanf("%s",code);}
    for(int i=0;i<4;i++){
        if(code[i]==code[i+1]){cnt++;}
        
    }
    if(cnt==0)printf("Good\n");
    else printf("Bad\n");
    return 0;
    }