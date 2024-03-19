#include<stdio.h>
int main(){
   char a[5];
   fgets(a,5,stdin);
   int i;
   for(i=0;i<5;i++){
     if(a[i]==a[i+1]){
       printf("Bad");
       break;
     }
   }
   if(i==5) printf("Good");
  return 0;
}