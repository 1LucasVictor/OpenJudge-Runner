#include <stdio.h>
int main(void){
    double N,sum=0;
    double x;
    
    scanf("%lf",&N);
    for(double i=1;i<=9;i++){
        x=N/i;
        for(double j=1;j<=9;j++){
            if(x==j){
                sum+=1;
                i=10;
            }
            else{
                sum+=0;
            }
        }
    }
    if(sum==0){
        printf("No\n");
    }
    else{
        printf("Yes\n");
    }
    return 0;
}