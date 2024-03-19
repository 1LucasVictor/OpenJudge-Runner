#include<stdio.h>

int main() {
  double X = 0;
  char yes[] = "Yes";
  char no[] = "No";
  char *mes;


  scanf("%lf", &X);
  if( X >= 30 ) mes = yes;
  else mes = no;  
  printf("%s", mes);
  return 0;
}