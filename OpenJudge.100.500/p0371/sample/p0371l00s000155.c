#include <stdio.h>
int main(void){
    
    int n, x, max, min,  i;
    long int sum=0;
    scanf("%d", &n);
    for (i=0; i<n; i++){
        scanf("%d", &x);
        sum+=x;
        if(i==0) max=x;
        else if (x>max) max=x;
        if(i==0) min=x;
        else if (x<min) min=x;
    }
    printf("%d %d %ld\n", min, max, sum);
    return 0;
    
}

