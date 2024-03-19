#include<stdio.h>
int main(){
    int N , A, B ;
    scanf("%d%d%d",&N,&A,&B);
    if(N>=1 && N<=50 && A>=1 && A <=50 && B>=1 && B<=50){
        if(N*A<=B){
            printf("%d",N*A);
        }  else{
            printf("%d",B);
        }
    }
}
