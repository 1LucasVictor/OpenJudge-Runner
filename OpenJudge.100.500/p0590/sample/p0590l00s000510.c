#include <stdio.h>

int main(void) {
    int a, b, c, d, e, k;
    scanf("%d\n %d\n %d\n %d\n %d\n %d", &a, &b, &c, &d, &e, &k);
    
   if(b-a < k && c-a < k && d-a < k && e-a < k )
       printf("%s", "Yay!");
    else
        printf("%s", ":(");
   
    return 0;
}