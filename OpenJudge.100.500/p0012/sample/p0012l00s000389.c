
#include<stdio.h>

int main (void){

    int in_car[10]={0};
    int out_car[10]={0};

    int i=0;
    int j=0;
    while(scanf("%d",&in_car[i])!=EOF){
        if(in_car[i]==0){
            i--;
            out_car[j]=in_car[i];
            in_car[i]=0;
            j++;
        }else{
            i++;
        }

    }
    for(i=0;i<10;i++){
        if(out_car[i]!=0)printf("%d\n",out_car[i]);
    }


    return 0;
}