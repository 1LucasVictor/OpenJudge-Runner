#include <stdio.h>



 int main(){

   int i,j;
   int cards[4][13];
   char suit;
   int num;
   int n;



    scanf("%d",&n);

   for (i = 0;i<4;i++){
     for(j=1;j<=13;j++){
        cards[i][j]=0;
      }
   }


   for(i=0;i <=n ;i++){

   scanf("%c %d\n",&suit,&num);


       if(suit == 'S')
          cards[0][num]=1;
       if(suit == 'H')
          cards[1][num]=1;
       if(suit == 'C')
          cards[2][num]=1;
       if(suit == 'D')
          cards[3][num]=1;

    }

    for(i = 0;i<4;i++){
      for(j = 1;j<=13;j++){
        if(cards[i][j]==1) continue;
          if(i==0)
          printf("S %d\n",j);
          if(i ==1)
          printf("H %d\n",j);
          if(i == 2)
          printf("C %d\n",j);
          if(i == 3)
          printf("D %d\n",j);

      }
    }










  //printf("\n");



return(0);
}