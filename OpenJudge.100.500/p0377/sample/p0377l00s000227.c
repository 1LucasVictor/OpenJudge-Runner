#include<stdio.h>
#define SUIT 4
#define RANK 13

int main(){

   int n;                           // input, n<=52
   int CardCheck[SUIT][RANK]={0};   // flag list, [suit][rank]
   int i, j;                        // loop cnt
   char suit;                      // suit num, S:0, H:1, C:2, D:3
   int suit_num;
   int rank;

   scanf("%d", &n);
   for(i=0;i<n;i++){
	   scanf(" %c %d", &suit, &rank);

	   if(suit == 'S') suit_num = 0;
	   else if(suit == 'H') suit_num = 1;
	   else if(suit == 'C') suit_num = 2;
	   else if(suit == 'D') suit_num = 3;

      CardCheck[suit_num][rank-1] = 1;
   }

   for(i=0;i<SUIT;i++){
      for(j=0;j<RANK;j++){
          if(CardCheck[i][j] == 0){
             if(i==0) printf("S");
             else if(i==1) printf("H");
             else if(i==2) printf("C");
             else if(i==3) printf("D");
             printf(" %d\n", j+1);
          }
      }
   }

   return 0;
}