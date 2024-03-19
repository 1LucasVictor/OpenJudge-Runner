#include <stdio.h>
#include <math.h>

int powcalc(int a){
    if (1 <= a && 10 >=a){
        int i = a + pow(a,2) + pow(a,3);
        return i;
    }
    else {
        return 1;
    }
}

int main(void){
    int a;
    scanf("%d",&a);
    printf("%d\n", powcalc(a));
    return 0;
}