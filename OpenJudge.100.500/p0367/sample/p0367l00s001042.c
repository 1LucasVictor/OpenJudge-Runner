#include <stdio.h>

int divisors(int a, int b, int c){
    int count = 0;
    int i;
    for (i = a; i <= b; i++){
        if(c % i == 0) 
            count += 1;
    }
    return count;
}

int main(void){
    int a = 0;
    int b = 0;
    int c = 0;
    scanf("%d %d %d", &a, &b, &c);
    printf("%d\n", divisors(a, b, c));

    return 0;
}

