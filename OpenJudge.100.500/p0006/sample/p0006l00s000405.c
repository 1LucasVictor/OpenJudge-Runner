#include <stdio.h>


int main(void){
    long int m=100000;
    int n,i;
    
    scanf("%d",&n);
    
    for(i=0;i<n;i++){
        m = (long int)(m * 1.05)-1;
        m = (m/1000+1)*1000;
    }
            
    printf("%ld\n",m);
    
    return 0;
}