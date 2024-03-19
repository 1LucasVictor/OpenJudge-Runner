#include <stdio.h>
#include <string.h>

int main()
{
    int a, b, c, n;

    scanf("%d", &a);
    scanf("%d", &n);
    scanf("%d", &n);
    scanf("%d", &n);
    scanf("%d", &b);
    scanf("%d", &c);

    //printf("%d,%d,%d\n", a, b, c); 

    if(b - a <= c){
        printf("Yay!");
    }
    else{
        printf(":(");
    }

    return 0;
}
