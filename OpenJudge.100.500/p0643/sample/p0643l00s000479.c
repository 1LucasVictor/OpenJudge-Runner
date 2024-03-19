#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {

    char s[12];
    char s1[6];
    char s2[6];
    
    fgets(s, 12, stdin);
    
    sscanf(s, "%s %s", s1, s2);
    
    int a=  atoi(s1);
    int b = atoi(s2);
    
    if(a % 2 == 1 && b%2==1){
        printf("Odd");
    }else{
        printf("Even");
    }

    return 0;

}
