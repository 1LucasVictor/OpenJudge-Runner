#include<stdio.h>
int main(){
    int L,R;
    scanf("%d %d",&L,&R);
    int k,l;
    int min=2018;
    int M;
    if(R-L>=2018){
        printf("0\n");
    }
    else{
    for(k=L;k<R;k++){
        for(l=k+1;l<=R;l++){
            M = (k*l)%2019;
            if(M<min){
                min=M;
            }
        }
        
    }
    printf("%d\n",min);
    }
    return 0;
}