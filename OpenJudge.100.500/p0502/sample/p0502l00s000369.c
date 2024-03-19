#include<stdio.h>
#include<stdlib.h>

int main(void){
    int N;
    int num;
    int ans;

    scanf("%d",&N);
    for(int i=0;i<N;i++){
        scanf("%d",&num);
        if(num%2==0){
            if(num%3==0||num%5==0){

            }else{
                printf("DENIED");
                return 0;
            }
        }
    }

    printf("APPROVED");

    return 0;
}