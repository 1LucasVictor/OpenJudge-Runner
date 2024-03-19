#include <stdio.h>
#include <string.h>
int main(void){
    char a[30];
    int n,i,m=100;
    fgets(a,m,stdin);
    n=strlen(a);
    for(i=n-1;i>=0;i--){
        if(a[i]!='\n'){
            printf("%c",a[i]);}
    }printf("\n");
}   