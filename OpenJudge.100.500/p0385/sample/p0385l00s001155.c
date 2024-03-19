#include <stdio.h>

int main(void){
    char x[1000] = {};
    int sum = 0;
    int num[1000] = {};
    while(1){
        scanf("%s", x);
        if( x[0] == '0' )   break;
        for(int w = 0; w <= 1000; w++){
            num[w] = x[w] - '0'; if( num[w] < 0 )    num[w] = 0;
            sum = sum + num[w];
        }
        printf("%d\n", sum);
        sum = 0;
        for(int w = 0; w <= 1000; w++){
            x[w] = '0';
        }
    } 
    return 0;
}
