#include<stdio.h>
#include<string.h>
int main(void){
    char a[25];
    int i,j;
    scanf("%s",a);
    for(i=strlen(a);i>0;i--){
        j=i-1;
        printf("%c",a[j]);
    }
    return 0;
}