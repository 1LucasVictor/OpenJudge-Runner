#include <stdio.h>

int main() 
{

    char s[11], t[12];
    int i = 0;
    scanf("%s", s);
    scanf("%s", t);

    while(s[i]){
        if ( s[i] != t[i] ){
            printf("No");
            return 0;
        }
        i++;
    }
    printf("Yes");
    return 0;
}

