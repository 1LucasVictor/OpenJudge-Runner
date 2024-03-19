#include <stdio.h>

int main(void)
{
    long long l, r;

    scanf("%d%d", &l, &r);

int min1 = 2018;
int n;
    for(int i=l; i<=r; i++){
        if(i%2019 < min1){
            min1 = i%2019;
            n = i;
        }
    }

int min2 = 2018;
    for(int i=l; i<=r; i++){
        if(i==n) continue;
        if(min1 <= i%2019 && i%2019 < min2){
            min2 = i%2019;
        }        
    }

int min = min1 * min2; 

printf("%d\n", min%2019);

return 0;

}