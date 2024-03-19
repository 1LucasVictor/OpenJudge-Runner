#include<stdio.h>
int main(){
    int i=0;
    char s[3];
    scanf("%s",s);

    if(s[0]=='1')i++;
    if(s[1]=='1')i++;
    if(s[2]=='1')i++;
    printf("%d",i);
   
    
    return 0;
}
