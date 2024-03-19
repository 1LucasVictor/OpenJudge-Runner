#include<stdio.h>
int main()
{
  int a[20000], b[20000], count=0,number[20000], i;
  char op = 'c';
  for (i=0; i<=20000; i++) {
    scanf("%d %c %d", &a[i+1] ,&op ,&b[i+1]);
    if (op == '?') {break;
    }
    count++;
    if ( op == '+' ){
      number[i+1]=a[i+1]+b[i+1];
    }
    else if ( op == '-' ){
      number[i+1]=a[i+1]-b[i+1];
    }
    else if ( op == '*' ){
      number[i+1]=a[i+1]*b[i+1];
    }
    else if ( op == '/' ){
      number[i+1]=a[i+1]/b[i+1];
    }
    else {

    }
  }

   for (i=1; i<=count; i++) {
    printf("%d\n" ,number[i]);
   }
  return 0;
}