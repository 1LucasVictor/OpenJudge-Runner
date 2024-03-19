#include<stdio.h>
int main(void){
    int n, min, max, i, x;
    scanf("%d", &n);
    scanf("%d", &min);
    scanf("%d", &max);
    max = max - min;
    for(i=2;i<n;i++){
        scanf("%d", &x);
        if(max < x - min){
            max = x - min;
        }
        if(min > x){
            min = x;
        }
    }
    printf("%d\n", max);
}
