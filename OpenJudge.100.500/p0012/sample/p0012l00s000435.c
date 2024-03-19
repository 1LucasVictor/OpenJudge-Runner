#include <stdio.h>

int main(void) {                                                                
    int car, index = 0;                                                         
    int stack[10] = {};                                                         
                                                                                
    while (scanf("%d", &car) != EOF) {                                          
        if (car == 0) {                                                         
            printf("%d\n", stack[--index]);                                     
        } else {                                                                
            stack[index++] = car;                                               
        }                                                                       
    }                                                                           
    return 0;                                                                   
}