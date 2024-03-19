#include<stdio.h>

int main()
{
 int A,B,C;
 int i, judge;
 judge = 0;

 //入力
 scanf("%d %d %d", &A, &B, &C);
 
 //判定処理1
 if(A == 5 || A == 7)
  judge += 1;
 if(B == 5 || B == 7)
   judge += 1;
 if(C == 5 || C == 7)
   judge += 1;
 if((A+B+C) == 17)
   judge += 1;

 //デバッグコメント
 //printf("A = %d\n", judge);

 //判定+出力
 if(judge == 4)
  printf("YES");
 else
  printf("NO");
 
 return(0);
}