#include<stdio.h>
int main()
{
    int N,i,j,k,l,cnt;
    while (scanf("%d",&N)!=EOF) {
        cnt = 0;
        for (i = 0; i <= 9; i++) {
            for (j = 0; j <= 9; j++) {
                for (k = 0; k <= 9; k++) {
                    for (l = 0; l <= 9; l++) {
                        if (i + j + k + l == N) {
                            cnt++;
                        }
                    }
                }
            }
        }
        printf("%d\n",cnt);
    }

    return 0;
}
