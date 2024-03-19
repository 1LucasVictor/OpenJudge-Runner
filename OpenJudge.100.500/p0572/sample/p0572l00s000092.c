#include <stdio.h>

int main() {
    long int l, r;
    scanf("%ld %ld", &l, &r);
    // printf("%d", l);

    if(r-l>2018) {
        printf("%d\n", 0);

        return 0;
    }

    long int i, j, min=2019;

    for(i=l; i<r+1; i++) {
        if(i%2019==0) {
            printf("%d\n", 0);

            return 0;
        } else if (i%673==0) {
            for(j=0; j<r+1; j++) {
                if(j%3==0) {
                    printf("%d\n", 0);

                    return 0;
                }
            }
        } else if (i<r) {
            for(j=i+1; j<r+1; j++) {
                if(min>i*j%2019) {
                    min = i*j%2019;
                }
            }
        }
    }

    printf("%ld\n", min);


    return 0;

}