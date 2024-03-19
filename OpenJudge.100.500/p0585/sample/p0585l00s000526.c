#include<stdio.h>

int main() {
   int A, B, T;
   int sum = 0;
   scanf("%d %d %d",&A,&B,&T);
   sum = T / A * B;
   printf("%d\n",sum);
}
