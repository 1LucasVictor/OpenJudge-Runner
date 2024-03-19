#include <stdio.h>
 
int main(void)
{
    int a, b;
     
    while (scanf("%d %d", &a, &b) != EOF){
        a = a + b;
        b = 0;
        do{
            b++;
            a /= 10;
        }while (a != 0);
        printf("%d\n", b);
    }
     
    return 0;
}