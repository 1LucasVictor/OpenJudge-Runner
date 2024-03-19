#include <stdio.h>

int main(void){
    char s[1000];
    int i = 0;
    int sum = 0;

    while(1){
        scanf("%s", s);
        if(s[0] - '0' == 0)
            break;

        while(s[i]){
            sum += s[i] - '0';
            i++;
        }
        printf("%d\n", sum);
        sum = 0;
        i = 0;
    }
    return 0;
}
