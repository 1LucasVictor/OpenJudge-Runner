#include <stdio.h>
#include <string.h>
int main () {
    char a;
    while (1) {
        scanf("%c",&a);
        if(a>='a'&&a<='z')
        a-=32;
        else if(a>='A'&&a<='Z')
        a+=32;
        printf("%c",a);
        if(a=='\n') return 0;
    } 
        
}
