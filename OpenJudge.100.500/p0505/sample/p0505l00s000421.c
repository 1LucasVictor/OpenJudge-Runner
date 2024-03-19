#include<stdio.h>
int main(void){

    int H,N;
    scanf("%d %d",&H,&N);
    int *a;
    a = (int *)malloc(sizeof(int)*N);
    for(int i=0;i<N;i++){
        scanf("%d",&a[i]);
    }
    int Total = H;
    for(int i=0;i<N;i++){
        Total -= a[i];
    }

    if(Total>0){
        printf("No");
    }else{
        printf("Yes");
    }
    return 0;
}