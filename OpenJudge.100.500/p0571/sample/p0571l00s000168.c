#include<stdio.h>

int main(){
        int N,A,B;
        scanf("%d %d %d",&N,&A,&B);
        int sum = N * A;
        if(sum>=B){
                printf("%d",B);
                return B;
        }else{
                printf("%d",sum);
                return sum;
        }
}