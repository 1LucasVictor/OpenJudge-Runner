#include <stdio.h>
//#include <string.h>

int main(void){
  
  int a,b,c,d,e,k = 0; 
  scanf("%d", &a);
  scanf("%d", &b);
  scanf("%d", &c);
  scanf("%d", &d);
  scanf("%d", &e);
  scanf("%d", &k);
  
  if(k<e-a) printf(":(");
  else printf("Yay!");


  return 0;
}
