#include <stdio.h>
#include <math.h>

int main(void){

    long int num, i, temp;
    long int boss_num[200005] = {};
    long int counter[200005] = {};

    scanf("%ld", &num);

    for(i = 0; i < num-1; i++){
        scanf("%ld", &boss_num[i]);
        temp = boss_num[i];
        counter[temp] += 1;
    }

    for(i = 1; i < num + 1; i++){
        printf("%ld\n", counter[i]);
    }

    return 0;

}