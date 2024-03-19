#include<stdio.h>
int main(void){
    int k,a,b,x[1000],y[1000],z[1000];
    scanf("%d",&k);
    scanf("%d%d",&a,&b);
    if(k==1){
        printf("OK");
        return 0;
    }
    
    else{
        for(int i=a;i<=b;i++){
            if(i%k==0){
                printf("OK");
                return 0;
            }
        }
    printf("NG");
    return 0;
    }
}

