#include <stdio.h>                                                                                       
                                                                                                         
int main(){                                                                                              
    int a,b;                                                                                             
    scanf("%d %d", &a, &b);                                                                              
    int ans;                                                                                             
    for(ans = 0; b > 0; ans++){                                                                          
        b -= a;                                                                                          
        if(ans == 0){                                                                                    
            a--;                                                                                         
        }                                                                                                
    }                                                                                                    
    printf("%d\n", ans);                                                                                 
    return 0;                                                                                            
}      