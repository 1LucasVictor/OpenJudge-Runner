#include<stdio.h>

int main(){
   int a, b, c;
   scanf("%d %d %d", &a, &b, &c);

   if(a>b) swap(&a, &b);
   if(b>c) swap(&b, &c);
   if(a>b) swap(&a, &b);

   printf("%d %d %d\n", a, b, c);
   return 0;
}

int swap(int *a, int*b){
   int x = *a;
   int y = *b;
   *a = y;
   *b = x;
   return 0;
}