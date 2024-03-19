#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n, m, i, j;
    scanf("%d %d", &n, &m);

    int integer[n+1];
    int numbers[m];
    int pos[m];

    memset(integer, 0, sizeof(integer));

    for(i = 0; i < m; i++)
    {
        scanf("%d", &pos[i]);
        scanf("%d", &numbers[i]);
    }

    for(i = 0; i < m; i++)
    {
        integer[pos[i]-1] = numbers[i];
    }

    if(integer[0] == 0)
    {
        printf("-1");
    }
    else
    {
        for(i = 0; i < m; i++)
        {
            printf("%d", integer[i]);
        }
    }
    
	return 0;
}