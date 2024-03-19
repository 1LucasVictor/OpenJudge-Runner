#include <stdio.h>
int main(){
    int N,A,B;
    scanf("%d %d %d",&N,&A,&B);
    if(B>N*A){
        printf("%d\n",N*A);
    }
    else{
        printf("%d\n",B);
    }
}