#include<stdio.h>

#define MAX 2000000

int main(void){

    char s[MAX]={0},t[MAX]={0};
    int i=0,c=0;

    scanf("%s",s);
    scanf("%s",t);

    for(i = 0; s[i] != '\0'; i++){
        if(s[i] != t[i]){
            c++;
        }
    }
    printf("%d",c);
    return 0;
    
}
