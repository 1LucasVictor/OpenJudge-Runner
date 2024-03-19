#include <stdio.h>


int main()
{
    int a, b, c, k;
    int d;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &k);

        if(k <= a + b){
            printf("%d\n", a);
        }
        else{
            d = a - (k-a-b);
            printf("%d\n", d);
        }
    
  

    return 0;
}
