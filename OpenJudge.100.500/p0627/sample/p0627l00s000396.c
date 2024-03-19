#include <stdio.h>
int main (){
    int a, b;
    scanf ("%d %d", &a, &b);
    
    int sum = a + b;
    int diff = a - b;
    int mult = a * b;
    
    if (sum >= diff && sum >= mult){
        printf ("%d", sum);
    }
    else if (diff >= sum && diff >= mult){
        printf ("%d", diff);
    }
    else if (mult >= sum && mult >= diff){
        printf ("%d", mult);
    }
    return 0;
}