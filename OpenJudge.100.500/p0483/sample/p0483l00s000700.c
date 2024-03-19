#include<stdio.h>
void main(){
   char n[3];
   int judg=0;
   scanf("%s",n);
   for(int i=0;i<3;i++){
      if(n[i]=='7'){
         judg++;
      }
   }
   if(judg==0){
      printf("No\n");
   }else{
      printf("Yes\n");
   }
}
