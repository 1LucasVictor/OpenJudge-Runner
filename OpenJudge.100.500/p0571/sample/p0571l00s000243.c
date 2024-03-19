#include<stdio.h>

int Pay(int train,int taxi , int N){
    int Min = 0;
    if(train * N < taxi){
        Min = train * N;
    }else{
        Min = taxi;
    }
    return Min;
}


int main(){
    int N,A,B,i;
    int Minimum = 0;
    int flag = 1;
    int tmp;
    
    scanf("%d %d %d",&N ,&A,&B);
    Minimum = Pay(A , B , N);
    printf("%d",Minimum);
    
    
}
