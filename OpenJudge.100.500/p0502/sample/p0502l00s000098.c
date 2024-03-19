#include<stdio.h>
#include<string.h>
int main(void){
    int N,A[1000],cou=0;
    scanf("%d",&N);
    for(int i=0;i<N;i++){
       scanf("%d",&A[i]);
       if(A[i]%2==0){
          if((A[i]%3==0)||(A[i]%5==0)){

          }else{
             cou++;
          }
       }
    }
    if(cou!=0){
       printf("DENIED");
    }else{
       printf("APPROVED");
    }



   return 0;
}
