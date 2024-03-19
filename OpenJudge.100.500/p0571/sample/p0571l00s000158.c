#include<stdio.h>

int Pay(int A,int B , int x , int y){
    return A*x + B*y;
}


int main(){
    int N,A,B,i;
    int Minimum = 0;
    int flag = 1;
    int tmp;
    scanf("%d %d %d",&N ,&A,&B);
    for(i = 0; i<=N;i++){
        tmp = Pay(A,B,i,N-i);
        if(tmp < Minimum || flag == 1){
            Minimum =   tmp;
            flag    =   0;
        }
    }
    printf("%d",Minimum);
    
    
}
