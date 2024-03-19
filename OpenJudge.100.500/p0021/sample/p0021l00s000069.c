#include <stdio.h>
#include <limits.h>

int main(void) {                                                                
    int i, j, n, a[5000], sum, max;                                             
                                                                                
    while (scanf("%d", &n), n) {                                                
        max = INT_MIN;                                                          
        i = 0;                                                                  
        while (i < n) {                                                         
            scanf("%d", &a[i++]);                                               
        }                                                                       
        i = 1;                                                                  
        while (i <= n) {                                                        
            sum = 0;                                                            
            for (j = 0; j < i; j++) {                                           
                sum += a[j];                                                    
            }                                                                   
            max = max < sum ? sum : max;                                        
            for (j = i; j < n; j++) {                                           
                sum += a[j];                                                    
                sum -= a[j - i];                                                
                max = max < sum ? sum : max;                                    
            }                                                                   
            i++;                                                                
        }                                                                       
                                                                                
        printf("%d\n", max);                                                    
    }                                                                           
    return 0;                                                                   
}