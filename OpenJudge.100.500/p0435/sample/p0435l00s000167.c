/* ABC174 B */

#include<stdio.h>

int main(void){
    int n, d, x, y, i, count=0;
    scanf("%d %d", &n, &d);
    for(i=0; i<n; i++){
        scanf("%d %d", &x, &y);
        if(x*x+y*y <= d*d){
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}
