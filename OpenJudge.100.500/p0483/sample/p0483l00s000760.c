#include <stdio.h>
#include <stdlib.h>

int main(void){
    int n, ii1, a;
    scanf("%d", &n);
    for(ii1=0; ii1<3; ii1++){
        a = n%10;
        if( a == 7){
          printf("%s\n", "Yes");
          return 0;
        }
        n /= 10;
    }

    printf("%s\n", "No");
    return 0;
}
