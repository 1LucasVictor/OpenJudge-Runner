#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>

int main() {

    char s[3];
    scanf("%s", s);
    
    if(strcmp(s,"AAA")==0 || strcmp(s,"BBB")==0){
        puts("No");
    }else{
        puts("Yes");
    }

    return 0;

}
