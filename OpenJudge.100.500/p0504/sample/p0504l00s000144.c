#include <stdio.h>

int main(){
    
    int H,A,k;
    k = 0;
    scanf("%d %d", &H,&A);
    while(H>0){
        H = H - A;
        k += 1;
    }
    printf("%d", k);
    return 0;
}
