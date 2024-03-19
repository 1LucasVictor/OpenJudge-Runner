#include<stdio.h>


int main (void){
    int N;
    int flag=0;
    scanf("%d",&N);


    if(N%10==7){
        flag=1;
    }else if((N/10)%10==7){
        flag=1;
    }else if(N/100==7){
        flag=1;
    }


    if(flag==1){
        printf("Yes");
    }else{
        printf("No");
    }

    return 0;
}

