#include <stdio.h>
int main(void){
    char a;
    
    while(1){
    scanf("%c",&a);
    if(a=='\n') {
        printf("\n");
        break;
    }
    if('A'<=a&&a<='Z') printf("%c",a+32);
    else if('a'<=a&&a<='z') printf("%c",a-32);
    else printf("%c",a);
    }
    
    return 0;
}
