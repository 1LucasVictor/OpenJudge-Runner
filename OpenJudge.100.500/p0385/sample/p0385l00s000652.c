#include <stdio.h>

int main(void)
{
    char str[1001];
    int i, sum;

    while(1){
        scanf("%s", str);
        if(str[0] == '0'){
            break;
        }

        sum = 0;
        for(i = 0; str[i] != '\0'; i++){
            sum += str[i] - '0';
        }
        printf("%d\n", sum);
    }

    return 0;
}
