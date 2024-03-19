#include <stdio.h>
int main(void){
    int i, num, sum;
    char number[1001];
    
    while(1) {
        scanf("%s", number);
        if(number[0] == '0') break;
        else {
            sum = 0;
            for(i=0; number[i] != '\0'; i++) {
                    num = number[i] - '0';
                    sum += num;
            }
            printf("%d\n", sum);
        }
    }
    return 0;
}
