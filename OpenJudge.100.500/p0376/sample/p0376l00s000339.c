#include<stdio.h>
int main(){
    int n,i,x[100];
    scanf("%d",&n);

    for(i=0;i<n;i++){
        scanf("%d",&x[i]);
    }

    for(i=n-1;i>=0;i--){
        if(i!=0){
            printf("%d ",x[i]);
        }else if(i==0){
            printf("%d",x[i]);
        }
    }

    printf("\n");

    return 0;
}