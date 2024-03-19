#include<stdio.h>
int main(){
   char S[3];
   int i;
   int countA=0;
   int countB=0;
   for(i=0;i<3;i++){
      scanf("%c",&S[i]);
      if(S[i]=='A'){
         countA++;
      }else{
         countB++;
      }
   }
   if(countA==3 ||countB==3){
      printf("No\n");
   }else{
      printf("Yes\n");
   }
   

   return 0;

}
