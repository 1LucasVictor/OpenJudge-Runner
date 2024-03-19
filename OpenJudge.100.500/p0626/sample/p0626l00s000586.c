#include <stdio.h>
int main(void){
    int k;
    int d;
    int n;
    int s;
    scanf("%d %d", &d, &n);
    s = 1;
    for(k = 0; k < d; k++){
        s *= 100;
    }
    s *= n;

    printf("%d\n", s);
    return 0;
}