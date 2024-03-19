#include <stdio.h>
 
int print_doc(n){
  if(n % 2 == 0) return n / 2;
  else return n / 2 + 1;
}
 
int main(){
  int a;
  
  scanf("%d", &a);
  
  printf("%d", print_doc(a));
  printf("\n");
  
  return 0;
}
