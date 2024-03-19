#include <stdio.h>
#include <limits.h>

int main(void){
    int n, m;
    int i;
    int max = -INT_MAX;
    int min = INT_MAX;
    long int sum = 0;

    scanf("%d", &n);
 
    for(i = 0; i < n; i++){
        scanf("%d ", &m);
        sum += m;
        if(max < m) max = m;
        if(min > m) min = m;
    }
    printf("%d %d %ld\n", min, max, sum);
    return 0;
}

    