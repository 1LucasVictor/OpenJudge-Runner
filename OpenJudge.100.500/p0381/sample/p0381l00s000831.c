#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int pattern[100] = {0,};
bool valid(int a, int b, int c, int x)                                                               
{                                                                                                    
        if (a == b || a == c || b == c) {                                                            
                return false;                                                                        
        }                                                                                            
        int sum = a+b+c;                                                                             
        if (sum != x) {                                                                              
                return false;                                                                        
        }                                                                                            
        int i, j=0;                                                                                  
        static int cnt;                                                                              
        for (i=0; i<cnt; i++) {                                                                      
                if (pattern[i] == a || pattern[i] == b || pattern[i] == c) {                         
                        if (++j>1) {                                                                 
                                return false;                                                        
                        }                                                                            
                }                                                                                    
        }                                                                                            
        pattern[cnt] = a; pattern[cnt++] = b; pattern[cnt++] = c;                                    
//      printf("%d %d %d\n", a,b,c);                                                                 
        return true;                                                                                 
}

int f(int n, int x)                                                                                  
{                                                                                                    
        int a,b,c;                                                                                   
        int ans=0;                                                                                   
        memset(pattern, 0, sizeof(pattern));                                                         
        /* 1-n ?????§??? 3 ????????°??? a,b,c */                                                            
        for (a=1; a<=n; a++) {                                                                       
                for (b=1; b<=n; b++) {                                                               
                        for (c=1; c<=n; c++) {                                                       
                                /* a,b,c ???????¨???? x ?????????????????????????????° ans ??? ? */                 
                                if (valid(a, b, c, x)) {                                             
                                        ans++;                                                       
                                }                                                                    
                        }                                                                            
                }                                                                                    
        }                                                                                            
        return ans;                                                                                  
}

int main(void)                                                                                       
{                                                                                                    
        char line[256];                                                                              
        int n, x;                                                                                    
                                                                                                     
        while (1) {                                                                                  
                if (!fgets(line, sizeof(line), stdin)) {                                             
                        fprintf(stderr, "error input val\n");                                        
                        return 0;                                                                    
                }                                                                                    
                if (sscanf(line, "%d %d", &n, &x) != 2) {                                            
                        fprintf(stderr, "error input format\n");                                     
                        return 0;                                                                    
                }                                                                                    
                                                                                                     
                if  (!(n != 0 && x != 0)) {                                                          
                        return 0;                                                                    
                }                                                                                    
                printf("%d\n", f(n, x));                                                             
        }                                                                                            
        return 0;                                                                                    
}