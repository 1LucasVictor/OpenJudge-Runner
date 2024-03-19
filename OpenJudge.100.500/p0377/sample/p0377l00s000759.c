#include <stdio.h>

 int main(void)
 {
     int n;
     int card[4][13];
     char suit[4] = "SHCD";
     scanf("%d", &n);
     int i,j,c;
     char s;
     for (i=0;i<4;i++)
     {
         for (j=0; j<13;j++)
         {
             card[i][j] = 0;
         }
     }
     for (i=0;i<n;i++)/* 왜 2*n 인거지?.... 오오 scanf 앞쪽에 \n 을 넣어주지 않으면 input 앞의 \n을 문자로 읽어서 오류.!*/
     {
         scanf("\n%c %d",&s,&c);
         //printf("i = %d,s = %c, c = %d ",i,s,c);
         if (s == 'S') card[0][c-1] = 1;
         else if (s == 'H') card[1][c-1] = 1;
         else if (s == 'C') card[2][c-1] = 1;
         else if (s == 'D') card[3][c-1] = 1;
     }
     for (i=0;i<4;i++)
     {
         for (j=0;j<13;j++)
         {
             if (card[i][j] == 0)
             {
                 printf("%c %d\n", suit[i],j+1);
             }
         }
     }
     return 0;
 }
