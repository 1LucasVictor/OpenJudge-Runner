#include<stdio.h>

int main(){
    int  N;
    int  a[3];

    scanf("%d",&N);

// N = N/100;
     if(N/100 == 7){
         printf("Yes\n");
     }
     else{
         N = N % 100;
         if(N/10==7){
             printf("Yes\n");
         }
         else{
             N = N % 10;
             if(N==7){
                printf("Yes\n");
             }
             else{
                 printf("No\n");
         }
         }
     }


    return 0;
}
