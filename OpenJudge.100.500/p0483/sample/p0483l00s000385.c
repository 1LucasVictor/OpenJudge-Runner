#include <stdio.h>

int main(void){
    int N, a, b, c; /*N=100a+10b+c*/

    scanf("%d", &N);
    a = N / 100;
    b = (N - a*100) / 10;
    c = N - a*100 - b*10;

    if(a == 7||b == 7||c==7) printf("Yes\n");
    else printf("No\n");

    return 0;
}