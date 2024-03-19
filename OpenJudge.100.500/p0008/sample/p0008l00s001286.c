#include <stdio.h>
#include <string.h>
 
#define MAX     (1000000)
 
int main(void)
{
    char flag[MAX + 1];
    int count;
    int i, j;
    int input;
     
    memset(flag, 1, MAX);
    flag[0] = flag[1] = 0;
    for (i = 2; i <= 1001; i++) if (flag[i]) for (j = i * 2; j <= MAX; j += i) flag[j] = 0;
     
    while (scanf("%d", &input) != EOF){
        count = 0;
        for (i = 0; i <= input; i++) if (flag[i]) count++;
        printf("%d\n", count);
    }
    return (0);
}