#include<stdio.h>
int main(){
    int X,A,B;
    scanf("%d %d %d",&X,&A,&B);
    if(A-B>=0){
        printf("delicious");
    }else if(A-B+X>=0){
        printf("safe");
    }else{
        printf("dangerous");
    }
    return 0;
}