#include <stdio.h>
int main(void){
    int  max, min, n, i;
    int sum = 0;
    scanf("%d\n", &n);
    int num[n];
    for(i = 0; i < n; i++){
        scanf("%d", &num[i]);
        sum = sum + num[i];
    }

    max = num[0];
    for(i = 0; i < n; i++){
        if(num[i] > max)
            max = num[i];
    }
    
    min = num[0];
    for(i = 0; i < n; i++){
        if(num[i] < min)
            min = num[i];
    }
    
    printf("%d %d %d\n", min, max, sum);
    return (0);
}
