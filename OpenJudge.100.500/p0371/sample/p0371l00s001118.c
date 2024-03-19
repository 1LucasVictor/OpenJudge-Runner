#include <stdio.h>

int main(void) {

    int n, i, j, k, max, min, a[10000];
    long long sum = 0;

    scanf("%d", &n);
    for(i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }

    while(i > -1){          //Calc sum.
        sum += a[i];
        i--;
    }

    min = a[0]; //To be temporarity set minimum value.
    max = a[0]; //To be temporarity set maximum value.

    for(j = 1; j < n; j++){ //Calc maximum value.
        if(max < a[j]){
            max = a[j];
        }
    }

    for(k = 1; k < n; k++){ //Calc mininum value.
        if(min > a[k]){
            min = a[k];
        }
    }

    printf("%d %d %d\n", min, max, sum);

    return 0;
}
