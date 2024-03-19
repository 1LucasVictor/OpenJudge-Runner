#include <stdio.h>
#include <string.h>
#include <math.h>
typedef struct{
    char name[11];
    long time;
}cell;

int main()
{
    long long max,min,a;
    unsigned long i,j,k;
    int tmp;
    unsigned long n;
    unsigned long stack = 0;
    unsigned long sum = 0;
    int m;
    unsigned long q;
    static cell cell[100001];
    scanf("%lu",&n);
    scanf("%lu",&q);
    for (i = 0; i < n; i++) {
        scanf("%s" ,&cell[i].name);
        scanf("%lu",&cell[i].time);
    }
    while(stack != n) {
        for(i = 0; i < n; i++) {
            if (cell[i].time == 0);
            if(cell[i].time > q) {
                cell[i].time -= q;
                sum += q;
            }
            else if(0 < cell[i].time && cell[i].time <=q) {
                sum += cell[i].time;
                cell[i].time = 0;
                printf("%s %lu\n"
                    ,cell[i].name ,sum);
                stack += 1;
            }
        }
    }

    return 0;
}