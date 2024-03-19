#include <stdio.h>

int main(void){
   
   char S[1000100];
   
   scanf("%s",S);
   
   int i,j,N = 0;
   int Nei[1000100];
   
   for(i = 0; S[i] != '\0';i++){
      N++;
      Nei[i] = i+1;
   }
   
   
   int ans = 0;
   int flag = 0;
   int nei;
   int i1,i2;
   int count = 0;

   while(flag == 0){
      flag = 1;
      count = 0;
      for(i = 0;i < N - 1;i++){
         i1 = i;
         i2 = Nei[i];
         
         if((S[i1] == '0' && S[i2] == '1') || (S[i1] == '1' && S[i2] == '0')){
            ans   = ans + 2;
            S[i1] = '2';
            S[i2] = '2';
            Nei[count] = i1 + 2;
            count++;
            flag = 0;
         }
         else if(S[i1] == '2'){
            Nei[count] = i1 + 1;
            count++;
         }
         
      }
      /*
      for(j = 0;j < N;j++){
         printf("%d %c\n",j,S[j]);
      }
      for(j = 0;j < count;j++){
         printf("%d\n",Nei[j]);
      }
      printf("#############\n");
       */
   }
   printf("%d\n",ans);
   return 0;
}
