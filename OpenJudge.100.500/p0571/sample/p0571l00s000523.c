#include<stdio.h>
int main(){
    int N,A,B;
    scanf("%d %d %d",&N,&A,&B);
    if(A*N<B){
        printf("%d",N*A);
    }
    else
    {
        printf("%d",B);
    }
    
    return 0;
}