#include <stdio.h>
int main(void){
    // Your code here!
    int A,B,N,S;
     scanf("%d%d%d",&N,&A,&B);
    S=A*N;
   
    if(S<=B){
        printf("%d\n",S);
        }else{
            printf("%d\n",B);
        }
    return 0;
}
