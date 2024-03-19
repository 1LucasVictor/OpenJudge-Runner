#include<string.h>
#include<stdio.h>
#include<stdlib.h>
int main(){
    char s[3];
    scanf("%s",s);
    int count = 0;
    for(int i=0;i<3;i++){
    if(s[i]=='1')count++;
    }
    printf("%d", count);
return 0;
}