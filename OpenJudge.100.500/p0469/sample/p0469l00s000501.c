#include<stdio.h>
int main(){
    int K;
    int A,B;
    scanf("%d",&K);
    scanf("%d %d",&A,&B);
    for(int i=A;i<=B;i++){
        if(i%K==0){
            printf("OK\n");
            return 0;
        }else if(i%K!=0){
            
        }
    }
    printf("NG\n");
}