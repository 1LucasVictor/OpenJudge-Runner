#include <stdio.h>
#include <math.h>


int main(void){
    int n, c[1000];
    int i, j;
    int sub, maxv;
    scanf("%d", &n);
    for (i=0; i <= n; i++){
        scanf("%d", &c[i]);
    } 
    
    maxv =  - pow(10,9); //10^9
    
    for (i=0; i <= n-1; i++){
        for (j=i+1; j <= n; j++){
            sub = c[j] - c[i];
            if (sub > maxv){
                maxv = sub ;
            }
        }
    }
    
    printf("%d", maxv);
}