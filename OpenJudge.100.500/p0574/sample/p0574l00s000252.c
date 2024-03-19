#include<stdio.h>
int juge(){
}

void main(){
   char a[5];
   scanf("%d",a);
   int i;
   for(i=0;i<5;i++){
     if(a[i]==a[i+1]){
       printf("Bad");
       break;
     }
   }
   if(i==5) printf("Good");
}