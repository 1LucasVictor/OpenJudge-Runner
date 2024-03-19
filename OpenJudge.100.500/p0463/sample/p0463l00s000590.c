/* kadai 3_2
   nabe9393 */
 
#include<stdio.h>
 
int main(void){
  int number_pen;
  scanf("%d", &number_pen); //入力
  if (number_pen % 10 == 3){ //１のくらいが３の時はBON
    printf("bon\n");
  }
  else if (number_pen % 10 == 0 || number_pen % 10 == 1 || number_pen % 10 == 6 || number_pen % 10 == 8){ //1のくらいが0,1,6,8の時はPON
    printf("pon\n");
  }
  else{ //それ以外はHON
    printf("hon\n"); 
  }
return 0;
}