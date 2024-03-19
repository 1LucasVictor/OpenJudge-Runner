#include <stdio.h>

#define Num 200000
int main(void){

    int l, n, i, j, max;
    int a[Num];

    scanf("%d", &l); 

    for(i = 0; i <= l-1; i++){
        scanf("%d", &n); 
        a[i] = n;
    }

    max = a[1] - a[0];

    for (i = 0; i <= l-2; i++) {
        for (j = i+1; j <= l-1; j++) {
            if(a[j]-a[i] > max){
                max = a[j]-a[i];
            }
        }
    }

    printf("%d\n", max);

    return 0;
}
