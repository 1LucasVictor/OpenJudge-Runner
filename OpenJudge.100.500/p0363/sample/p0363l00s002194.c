#include<stdio.h>
#include<stdlib.h>

int compare(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}
int main(void)
{
    int x[3];
    while(1)
    {
        char buffer[256];
        fgets(buffer, 256, stdin);
        sscanf(buffer, "%d %d %d", &x[0], &x[1], &x[2]);
        if((1<=x[0] && x[0]<=10000) &&
        (1<=x[1] && x[1] <= 10000) &&
        (1<=x[2] && x[2] <= 10000)) break;
    }
    qsort(x, 3, sizeof(int), compare);
    printf("%d %d %d\n", x[0], x[1], x[2]);
    
    return(0);
}
