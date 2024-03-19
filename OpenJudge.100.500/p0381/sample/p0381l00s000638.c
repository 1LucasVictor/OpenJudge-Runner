int main(void) {
    int n, x, i, j, k, count, sum ;
    sum=0;
    count = 0;
    while (1) {
 
        scanf("%d %d", &n, &x);
 
        if (n == 0 && x == 0) break;
 
        for (i = 1; i <= n; i++) {
            for (j = i + 1; j <= n; j++) {
                for (k = j + 1; k <= n; k++) {
                    sum = i + j + k;
                    if (sum == x) {
                        count++;
                    }
                }
            }
        }
        printf("%d\n", count);
        count = 0;
    }
    return 0;
}