#include<stdio.h>
 int main(void)
 {
     int D,N,i,j=0;
 
     scanf("%d%d",&D,&N);
 
     if(D==0){
       for(i=1;i<=10000;i++){
         if(i%100!=0) j++;
         if(j==N){
           printf("%d\n",i);
           return 0;
         }
       }
     }
     if(D==1){
       for(i=0;i<=10000;i++){
         if(i%100!=0) j++;
         if(j==N){
           printf("%d\n",i*100);
           return 0;
         }
       }
     }
 
     if(D==2){
       for(i=1;i<=10000;i++){
         if(i%100!=0) j++;
         if(j==N){
           printf("%d\n",i*10000);
           return 0;
         }
       }
     }
 
 }