#include <stdio.h>
 
int main()
{
    int n, S[10000], q, T[500], i, j, k;
    int same = 0;

    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &S[i]);

    scanf("%d", &q);
    for (i = 0; i < q; i++)
        scanf("%d", &T[i]);
   
    for (i = 0; i < n; i++) {
        for (j = 0; j < q; j++) {
            if (S[i] == T[j]) {
                same += 1;
                for (k = j - 1; k >= 0; k--) {
                    if (T[k] == T[j])
                        same -= 1;
                }
            }
        }
        for (k = i - 1; k >= 0; k--) {
            if (S[k] == S[i])
                same -= 1;
        }

    }

    printf("%d\n", same);

    return 0;
}