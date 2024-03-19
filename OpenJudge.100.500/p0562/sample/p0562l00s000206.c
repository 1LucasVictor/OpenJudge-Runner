#include <stdio.h>                                                                                       
                                                                                                         
int main(){                                                                                              
    int a,b;                                                                                             
    scanf("%d %d", &a, &b);                                                                              
    b -= a;                                                                                              
    int ans;                                                                                             
    a--;                                                                                                 
    for(ans = 1; b > 0; ans++){                                                                          
        b -= a;                                                                                          
    }                                                                                                    
    printf("%d\n", ans);                                                                                 
    return 0;                                                                                            
}               