// AOJ Volume 0 Problem 0012

#include <stdio.h>

int main(void)
{
    int cars[1000];
    int n;
    int car_no;

    n = 0;
    
    while (scanf("%d", &car_no) != EOF){
    
        if (car_no == 0){
            printf("%d\n", cars[--n]);
        }
        else {
            cars[n++] = car_no;
        }
    }

    return (0);
}