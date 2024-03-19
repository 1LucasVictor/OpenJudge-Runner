#include<stdio.h>
 
int main() {
 int a;
 double b;
 int c;

 scanf("%d %lf", &a, &b);
 c = (int)(a * b);

 printf("%d", c);
 return(0);
}