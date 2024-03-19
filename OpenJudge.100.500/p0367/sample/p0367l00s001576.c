#include<stdio.h>


int main(void)
{
    int a, b, c, divisor = 0, d, i = 0, num;
    int array[1000];
    scanf("%d %d %d", &a, &b, &c);
    for(d = 1 ; d < c ; d ++){
        if(c % d == 0){
            array[i] = d;
            i ++;
        }
    }
    num = i;
    for(i = 0 ; i <= num ; i ++){
        if((a <= array[i]) && (b >= array[i])){
                divisor ++;
        }
    }
    printf("%d\n", divisor);
    return 0;
}