#include <stdio.h>

int main(void){
    char order[10];
    int j = 0;
    fgets(order, 10, stdin);
    if(order[0] == '1')
        j++;
    if(order[1] == '1')
        j++;
    if(order[2] == '1')
        j++;
    printf("%d\n", j);
    return 0;
}