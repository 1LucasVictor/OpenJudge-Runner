#include<stdio.h>
int main(void){
    char a[25]={0};
    int i;
    scanf("%s",a);
    for(i=24;i>=0;i--){
        if(a[i]!=0){
        printf("%c",a[i]);
        }
    }
    printf("\n");
    return 0;
}