#include <stdio.h>

int main(void)
{
    int n, i, j, k, sum, tempsum, start, end;
    int a[5000];
    
    while(1){    
        scanf("%d", &n);
        
        if(n == 0) break;
        for (i = 0; i < n; i++){
            scanf("%d", &a[i]);
        }
        sum = -100000;
        for (i = 0; i < n; i++){
            tempsum = 0;
            // start = j;
            // end = i + j;
            for (j = i; j < n; j++){
                tempsum += a[j];
                // if(end >= n) break;
                // for(k = start; k <= end; k++){
                //     //printf("window %d\n", end - start);
                //     tempsum += a[k];
                // }
                // //printf("temp %d\n", tempsum);
                if(tempsum > sum) sum = tempsum;
            }
            
        }
        printf("%d\n", sum);
    }
    return (0);

}
