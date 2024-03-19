#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, j, n, s, q, t, cnt = 0;
    int *s_array;
    
    scanf("%d", &n);
    s_array = malloc(sizeof(int) * n);
    for(i = 0; i < n; i++){
        scanf("%d", &s);
        s_array[i] = s;
    }
    scanf("%d", &q);
    for(i = 0; i < q; i++) {
        scanf("%d", &t);
        for(j = 0; j < n; j++) {
            if(t == s_array[j]) 
                cnt++;
        }
    }

    printf("%d\n", cnt);

    return 0;
}