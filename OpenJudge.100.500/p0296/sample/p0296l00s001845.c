#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
 int i=0;
 int num[100];
 char stack[100];

 while( scanf("%s", stack) != EOF ){
  if ( stack[0] == '+' ){
   num[i-2]=num[i-2]+num[i-1];
   i--;
   } else if ( stack[0] == '-' ){
    num[i-2]=num[i-2]-num[i-1];
   i--;
  } else if ( stack[0] == '*' ){
   num[i-2]=num[i-2]*num[i-1];
   i--;
  } else {
   num[i] = atoi(stack);
   i++;
  }

 }
 printf("%d\n",num[0]);

 return 0;
}