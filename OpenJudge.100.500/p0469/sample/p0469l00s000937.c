#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    int k, a, b;
    scanf("%d %d %d", &k, &a, &b);

    if (a % k == 0) {
        printf("OK");
    } else {

        int sho = a / k;
        sho++;
        //printf("%d\n",sho);

        if (sho * k >= a && sho*k<=b) {
            printf("OK");
        } else {
            printf("NG");
        }


    }




    return 0;

}