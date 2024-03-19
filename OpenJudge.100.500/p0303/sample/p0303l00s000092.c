#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>

static int w[100000+1];

static int Allocate(int P, int w[], int n) {
    int i;
    int k = 0;
    int t = 0;

    k = 1;
    for ( i = 0; i < n; i++ ) {
        if ( w[i] > P ) {
            return -1;
        }
        t += w[i];
        if ( t <= P ) {
            continue;
        }

        k++;
        t = w[i];
    }

    return k;
}



int main(int argc, char* argv[]) {
    int n, k, i;
    int total_w = 0;

    scanf("%d %d\n", &n, &k);

    for ( i = 0; i < n; i++ ) {
        int t;
        scanf("%d\n", &t);
        w[i] = t;
        total_w += t;
    }

      /* binary search */
    int left = total_w / k;
    int right = total_w + 1;
    int min_p = total_w;
    while ( 1 ) {
        int center = (left + right) / 2;
        int t;

        t = Allocate(center, w, n);
        if ( (t < 0) || (t > k) ) {
            left = center + 1;
        } else /* t <= k*/ {
            if ( center < min_p ) {
                min_p = center;
                right = center - 1;
            } else {
                break;
            }
        }
        if ( left > right ) {
            break;
        }
    }

    printf("%d\n", min_p);

    return 0;
}

