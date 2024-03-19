#include <stdio.h>
#include <string.h>

#define SIZE 200000

int main(void){
    char s[SIZE], t[SIZE];
    int length, diff=0;

    scanf("%s", s);
    scanf("%s", t);

    length = strlen(s);

    for(int i=0; i<length; i++){
        if(s[i] != t[i]){
            diff ++;
        }
    }
    printf("%d\n", diff);

    return 0;
}
