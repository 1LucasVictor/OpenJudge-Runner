#include<stdio.h>
#include<stdlib.h>
#define nMax 200000
#define nMin 2
#define RMax 1000000000
#define RMin 1

 int main(){

   int R[nMax],time,i,max=0,sub;

   scanf("%d",&time);
   if(nMin<=time && time<=nMax){
     for(i=0;i<time;i++){
       scanf("%d",&R[i]);
       if(RMin>R[i] || R[i]>RMax)
	 exit(1);
       }
     max=R[i-1];
     sub=R[i-1]-R[i-2];
     for(i=time-2;i>=0;i--){

       if(max<R[i] && i!=0){
	 max=R[i];
       }
       if(sub<max-R[i] && R[i]!=max){
	 sub=max-R[i];
       }
     }
   }
   else exit(1);

   printf("%d\n",sub);

   return 0;
 }
       
 

