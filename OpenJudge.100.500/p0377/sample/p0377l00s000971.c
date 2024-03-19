#include <stdio.h>

int main(){
   int n;
   scanf("%d",&n);
   int card[4][13]={{}};

   char str[2];
   int num;

   int i;
   for(i = 0; i < n ; i++){
       scanf("%s%d",str,&num);
       char ch = str[0];
       if(ch == 'S'){
           card[0][num-1] = 1;
       }
       if(ch == 'H'){
           card[1][num-1] = 1;
       }
       if(ch == 'C'){
           card[2][num-1] = 1;
       }
       if(ch == 'D'){
           card[3][num-1] = 1;
       }
   }


   for(i = 0; i < 13; i++){
       if(card[0][i] == 0){
           printf("S %d\n",i+1);
       }
   }

   for(i = 0; i < 13; i++){
       if(card[1][i] == 0){
           printf("H %d\n",i+1);
       }
   }

   for(i = 0; i < 13; i++){
       if(card[2][i] == 0){
           printf("C %d\n",i+1);
       }
   }

   for(i = 0; i < 13; i++){
       if(card[3][i] == 0){
           printf("D %d\n",i+1);
       }
   }

}
