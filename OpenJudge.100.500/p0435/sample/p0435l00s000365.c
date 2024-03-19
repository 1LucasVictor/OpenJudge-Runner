#include <stdio.h>
#include <math.h>
int main(void){
   int answer;
   int N,D;
   scanf("%d %d",&N,&D);
   int X,Y;
   float distance;
   int real;
   for(int i = 1;i <= N;i++){
       scanf("%d %d",&X,&Y);
       distance = sqrt(X*X + Y*Y) + 0.9;
       real = (int)distance;
       if(real <= D){
           answer = answer + 1;
       }
   }
   printf("%d\n",answer);
   return 0;
}
