#include <stdio.h>
int main(void){
    int d;
    int n;
    int s;

    scanf("%d %d", &d, &n);
    if(!d){s = 1;}
    if(d == 1){s = 100;}
    if(d == 2){s = 10000;}
    s *= n;
    if(!d&&n==100){s++;}


    printf("%d\n", s);
    return 0;
}