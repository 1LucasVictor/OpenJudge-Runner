#include<stdio.h>
#include<string.h>
int main(){
    char str[20]; 
    int i; 
    
    scanf("%s",str); 
    
    i=strlen(str)-1;
    
    for(;i>=0;i--){
        printf("%c",str[i]);
    } 
    
    printf("\n");
    
    return 0; 
    
} 
