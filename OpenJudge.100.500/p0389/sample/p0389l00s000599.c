#include <stdio.h>
#include <string.h>
int main(void){
    char x[200];
    int m, h[200], i, j, tmp;  
    
    while(1){
        int xn=0, sum=0;
        scanf("%s\n", x);
        scanf("%d", &m);
        for(i=0; i<m; i++){
            scanf("%d", &h[i]);
        }
        
        xn = strlen(x);
        
        if(strcmp(x, "-") == 0) break;
        
        for(i=0; i<m; i++){
            sum = sum + h[i];
        }
        
        for(i=0; i<sum; i++){
            tmp = x[0];
            for(j=0; j<xn; j++){
                x[j] = x[j+1];
            }
            x[xn-1] = tmp;
        }
        
        for(i=0; i<xn; i++){
            printf("%c", x[i]);
            if(i == xn-1){
                printf("\n");
            }
        }
    }
    
    return 0;
}

