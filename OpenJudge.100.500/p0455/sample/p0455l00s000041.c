#include <stdio.h>
#include <math.h>

int main(void){
    int a;
    scanf("%d", &a);
    if (1<=a && a<=10){
        printf("%d\n",  (int)(a+pow(a, 2)+pow(a, 3)));
        return 0;
    }
    else return 1;
}