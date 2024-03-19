#include <stdio.h>
int main(void){

    int c=0,i=0;
    char s[3];

    scanf("%s", s);

    for (i = 0; i < 3;i++){
        if(s[i]==49)
            c++;
    }

    printf("%d\n", c);

    return 0;
}