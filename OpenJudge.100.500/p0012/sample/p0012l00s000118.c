#include<stdio.h>

#define EMPTY 0

int main(void) {
    int i, car_stack[100];
    for(i = 0; i < 100; i++) car_stack[i] = EMPTY;                                                                                                      

    int id_coming_car;
    int pos_head = 0;
    while(scanf("%d", &id_coming_car) != EOF) {
        if(id_coming_car != 0) car_stack[pos_head++] = id_coming_car;
        else {
            printf("%d\n", car_stack[--pos_head]);
            car_stack[pos_head] = EMPTY;
        }
    }

    return 0;
}