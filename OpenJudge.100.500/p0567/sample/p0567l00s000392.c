#include <stdio.h>

int main(){
    int limit1, b, c, anser;

    anser = 0;

    scanf("%d %d %d", &limit1, &b, &c);

    if(c <= (limit1 - b))
    {
        anser = 0;
    } else {
        anser = c - (limit1 - b);
    }
    
    printf("%d", anser);

}