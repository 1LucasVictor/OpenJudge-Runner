#include <stdio.h>

int main(int argc, const char * argv[])
{

    int input;
    int cnt = 0;
    int idx = 0;
    int prime[1000000] = {0};
    int i, j;
    
    while (scanf("%d", &input) != EOF) {
        prime[1] = 1;
        for (i = 2; i <= input; i++) {
            for (j = 2; j * i <= input; j++) {
                    //printf("%d\n", i * j);
                idx = i * j;
                prime[idx]++;
            }
        }
        for (i = 1; i <= input; i++) {
            if (prime[i] == 0) {
                //printf("%d\n", i);
                cnt++;
            }
        }
        printf("%d\n", cnt);
        cnt = 0;
    }
    return 0;
}