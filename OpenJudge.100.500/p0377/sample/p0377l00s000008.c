#include <stdio.h>

int main()
{

 int cards[4][13] = {0}, n, i, j, a;
 char c;

 scanf("%d\n", &n);

 for(i = 0; i < n; i++)
 {
     scanf("%c %d\n", &c, &a);
     if(c == 'S')
     {
         cards[0][a - 1] = 1;
     }
     else if(c == 'H')
     {
         cards[1][a - 1] = 1;
     }
     else if(c == 'C')
     {
         cards[2][a - 1] = 1;
     }
     else if(c == 'D')
     {
         cards[3][a - 1] = 1;
     }
 }

 for(i = 0; i < 4; i++)
 {
     for(j = 0; j < 13; j++)
     {
         if(cards[i][j] == 0)
         {
             if(i == 0)
             {
                 printf("S %d\n", j + 1);
             }
             else if(i == 1)
             {
                 printf("H %d\n", j + 1);
             }
             else if(i == 2)
             {
                 printf("C %d\n", j + 1);
             }
             else if(i == 3)
             {
                 printf("D %d\n", j + 1);
             }
         }
     }
 }

 return 0;

}