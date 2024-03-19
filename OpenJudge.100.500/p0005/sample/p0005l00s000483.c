#include <stdio.h>
#include <string.h>
int main(void){
    char str[21];
    char reverse[21];
    int i,n;
    
    scanf("%s",str);
    n=strlen(str);
    
    for(i=0; i<n; i++){
        reverse[i]=str[n-1-i];
    }
    
    for(i=0;i<n;i++){
        printf("%c",reverse[i]);
    }
    printf("\n");
    
    return 0;
}