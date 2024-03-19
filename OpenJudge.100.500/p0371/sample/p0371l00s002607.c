#include <stdio.h>

int
main(int argc, char *argv[])
{
        int n, data;
        int i, min, max;
        long int sum;

        scanf("%d\n", &n);
        min = 1000001; max = -1000001; sum = 0;
        for (i = 0; i < n; i++) {
                scanf("%d", &data);
                if (min > data) min = data;
                if (max < data) max = data;
                sum += data;
        }

        printf("%d %d %ld\n", min, max, sum);
        
        return 0;
}