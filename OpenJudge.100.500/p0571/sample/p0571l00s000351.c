#include<stdio.h>
int main(){
    int N,A,B;
    scanf("%d %d %d",&N,&A,&B);
    int bu=N*A;
    if(bu>=B){
        printf("%d",B);
    }else{
        printf("%d",bu);
    }
    }