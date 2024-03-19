#include <stdio.h>
#include <math.h>

int main(){
    int N, D;
    int p, q;
    int count=0;

    scanf("%d %d", &N, &D);
    
    for(int i=0; i<N; i++){
        scanf("%d %d", &p, &q);
        if(sqrt(p*p+q*q) <= D){
            count++;
        }
    }
    
    printf("%d", count);
    return 0;
}