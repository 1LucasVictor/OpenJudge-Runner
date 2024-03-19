#include <stdio.h>

void main(){

    int x, a, b;

    scanf("%d %d %d", &x, &a, &b);

    if(a-b > 0) printf("%s\n", "delicious");
    else if(a-b < 0 || b-a < x) printf("%s\n", "safe"); 

    else printf("%s\n", "dangerous");

}