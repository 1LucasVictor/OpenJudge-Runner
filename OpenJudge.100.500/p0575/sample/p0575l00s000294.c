#include <stdio.h>
int main(){
    int X,A,m=0,k=10;
    
    scanf("%d%d",&X,&A);
    while (X>=0 && X<=9 && A>=0 && A<=9) {

    if (X>A) {
        
        printf("%d\n",k);
        
    }
    else
        printf("%d\n",m);
        break;
    }
    
    return 0;
}
