/* ex 3_4
  kt125 */

#include<stdio.h>

int main(void){
  int n;
  scanf("%d", &n);
  
  int exist = 0;
  for(int i = 0; i < 9; i++){
    for(int j = 0; j< 9; j++){
      if(n == (i+1) * (j+1)){
        exist++ ; break;
      }
    }
  }
  
  if (exist == 0)
    printf("No");
  else
    printf("Yes");

}
    