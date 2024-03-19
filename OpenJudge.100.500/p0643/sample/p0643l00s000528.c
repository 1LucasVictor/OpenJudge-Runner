#include <stdio.h>
 
int main() {
  int a,b;
  int c=a*b;
  
  a=3;
  b=4;
  
  if(c%2==0){
    printf("Even");
  }
  else{
    printf("Odd");
  }
}