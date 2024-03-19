#include<stdio.h>
#include<string.h>
int main(){
    char c[1200] = {0};
    int i = 0;
    int j = 0;
    for(i=0;i<1200;i++){
        scanf("%c",&c[i]);
        if(c[i]=='\n'){
            break;
        }
    }
    for(j=0;j<=i;j++){
        if(c[j]>=65&&c[j]<=90){
            c[j] = c[j]+32;
        }
        else if(c[j]>=97&&c[j]<=122){
            c[j] = c[j]-32;
        }
    }
    for(j=0;j<=i;j++){
        printf("%c",c[j]);
    }
   // printf("\n");
    return 0;
}