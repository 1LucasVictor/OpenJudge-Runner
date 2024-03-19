#include <stdio.h>
#include <string.h>

#define MAX 1024

int main(){
    char s[MAX], t[MAX];
    int n, m, h;
    int i;
    
    while(scanf("%s", s), strcmp(s, "-") != 0){
        
        n = strlen(s);
        
        scanf("%d", &m);
        
        for(i = 0; i < m; ++i){
            scanf("%d", &h);
            
            memcpy(t + n - h, s,     h);
            memcpy(t,         s + h, n - h);
            memcpy(s,         t,     n);
        }
        
        printf("%s\n", s);
    }
    
    return 0;
}