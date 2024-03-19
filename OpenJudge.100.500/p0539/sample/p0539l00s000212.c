#include <stdio.h>

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define max(a, b) ((a) > (b) ? (a) : (b))
#define min(a, b) ((a) < (b) ? (a) : (b))

#define scani(i) scanf("%d", &(i))
#define scanc(c) scanf("%c", &(c))
#define scand(d) scanf("%lf", &(d))

#define printi(i) printf("%d\n", (i))

#define NUM (100)

int main(int argc, char** argv){
    int i, j, x;
    scani(x);

    rep(i, 10){
        rep(j, 10){
            if(i * j == x){
                printf("Yes\n");
                return 0;
            }
        }
    }

    printf("No\n");

    return 0;
}

