#include<stdio.h>
#include<memory.h>
#include<stdlib.h>
#include<string.h>


int main(void){

        int N=0;
        int flag = 0;
        scanf("%d",&N);        

        for(int i=1;i<10;i++){
                if(N%i == 0){
                        if(N/i < 10){
                                printf("Yes\n");
                                i = 20;
                                flag = 1;
                        }
                }
        }
        if(!flag){
                printf("No\n");
        }

        return 0;
}       