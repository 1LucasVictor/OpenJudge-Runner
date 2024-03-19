#include <stdio.h>                                                                                       
                                                                                                         
int main(){                                                                                              
    int a,b;                                                                                             
    scanf("%d %d", &a, &b);                                                                              
    if(b == 0){                                                                                           
        printf("0\n");                                                                                   
        return 0;                                                                                        
    }                                                                                                    
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
