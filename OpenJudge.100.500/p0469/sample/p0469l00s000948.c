#include <stdio.h>
int main(){
  int a, b, c, list, sum;
  
  scanf("%d",&a);
  scanf("%d %d",&b, &c);
  
  list = (c - b) + 1;
  sum = 0;
  
    for(int i = 0; i > list ; i++){
      if ( i % a == 0){
        sum = sum + 1;
      }
    }
  		if (sum = 0){
          printf("NG");
        }
  
        else {
          printf("OK");
        }
  
  return 0;
}