#include<stdio.h>
#include<string.h>
int main(void){
    int A,B;
    scanf("%d %d",&A,&B);
     if(B%A==0){
         printf("%d",A+B);
     }else{
         printf("%d",A-B);
     }
    return 0;
}