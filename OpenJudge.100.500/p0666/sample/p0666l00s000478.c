#include <stdio.h>

int main(){

    int x, a, b;

    scanf("%d %d %d", &x, &a, &b);

    if(a-b >= 0) printf("%s\n", "delicious");
    else if(b-a <= x) printf("%s\n", "safe"); 
    else printf("%s\n", "dangerous");

    return 0;

}