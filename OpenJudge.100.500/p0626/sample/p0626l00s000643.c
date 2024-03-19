#include<stdio.h>
int main(){
    int D;
    long N;
    
    
    scanf("%d",&D);
    scanf("%ld",&N);
    
//    for (i=0;i<D;i++) {
//        N = N*100;
//    }
    
    
    if (D == 1) N = N*100;
    else if (D==2) N = N*10000;
    else if (D==0) N = N;
    
    printf("%ld\n",N);
    
    return 0;
    
}
