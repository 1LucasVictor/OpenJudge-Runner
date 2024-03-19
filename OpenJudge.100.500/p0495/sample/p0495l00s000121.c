#include <stdio.h>
#include <string.h>

int main(){
    char s[3];
    int a = 0, b = 0;

    scanf("%s",s);

    for(int i = 0 ; i < 3;++i){
        if(s[i] == 'A')
            ++a;
        else 
            ++b;
    }
    if( a == 2 || b == 2)
        puts("Yes");
    else
        puts("No");


    return 0;
}