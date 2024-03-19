/* kadai 3_2
   nabe9393 */
 
#include<stdio.h>
 
int main(void){
  int num_pen;
  scanf("%d", &num_pen); //入力
  if (num_pen % 10 == 3){ //１のくらいが３の時はBON
    printf("bon\n");
  }
  else if (num_pen % 10 == 0 || num_pen % 10 == 1 || num_pen % 10 == 6 || num_pen % 10 == 8){ //1のくらいが0,1,6,8の時はPON
    printf("pon\n");
  }
  else{ //それ以外はHON
    printf("hon\n"); 
  }
return 0;
}