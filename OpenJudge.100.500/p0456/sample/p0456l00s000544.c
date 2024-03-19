#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(void){
    char s[200000+5], t[200000+5];
    int c=0;
    
    scanf("%s", s);
    scanf("%s", t);
    
    for(int i=0; i<strlen(s); i++){
        if(s[i]!=t[i]){
            c++;
        }
    }
    
    printf("%d", c);
    
    return 0;
}
