#include <stdio.h>

int main() {
    int number; 
    int number1[10000] = {0};
    int min, max, sum;
    int i;

    scanf("%d", &number);
    for (i = 0; i < number; i++){
        scanf("%d", &number1[i]);
    }
    
    min = number1[0];
    max = number1[0];
    sum = 0;

    for (i = 0; i < number; i++) {
        if (min > number1[i]) {
            min = number1[i];
        }
        if (max < number1[i]) {
            max = number1[i];
        }
        sum += number1[i];
    }

    printf("%d %d %d\n", min, max, sum);

    return 0;
}