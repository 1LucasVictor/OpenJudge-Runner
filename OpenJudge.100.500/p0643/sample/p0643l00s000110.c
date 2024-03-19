
#include <stdio.h>

int main(void){
    char order[10];
    int j, q, k;
    
    fgets(order, 10, stdin);
    sscanf(order, "%d %d", &j, &q);
    k = j * q % 2;
    if(k == 0)
        printf("Even\n");
    else
        printf("Odd\n");
    return 0;
}
