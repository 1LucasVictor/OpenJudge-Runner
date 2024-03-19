#include <stdio.h>
int main(void){
    // Your code here!
    int A,B,T,i,v=0,k=0,j=1;
    
    scanf("%d %d %d" ,&A ,&B ,&T);
    
    for(i=0;v<=T;i++){
        if(A <= T){
            k += B;
            j++;
            v = A*j;
        }
    }
    
    printf("%d",k);
}

