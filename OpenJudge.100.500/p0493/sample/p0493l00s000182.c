#include<stdio.h>

int main(){
    int X,max=0;
    scanf("%d",&X);
    while(X>=5){
        if(X>=500){
            X-=500;
            max+=1000;
        }else{
            X-=5;
            max+=5;
        }
    }
    printf("%d\n",max);
    return 0;
}