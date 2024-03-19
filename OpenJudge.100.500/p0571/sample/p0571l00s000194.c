#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    int N,A,B;
    scanf("%d %d %d",&N,&A,&B);
    if((A*N)>B){
        printf("%d\n",B);
    }else{
        printf("%d\n",A*N);
    }
}