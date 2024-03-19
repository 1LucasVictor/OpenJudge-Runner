#include<stdio.h>
int main(void){

    int N;
    int flag=0;
    int i;
    int a[100];
    scanf("%d",&N);
    if(N>=1&&N<=100){
        for(i=0;i<N;i++){
            scanf("%d",&a[i]);
        }
        for(i=0;i<N;i++){
            if(a[i]%2==0){
                if(a[i]%3==0||a[i]%5==0){
                }else{
                    flag++;
                }
            }
        }
    }else{
        exit(1);
    }
    if(flag){
        printf("DENIED");
    }else{
        printf("APPROVED");
    }
    return 0;
}