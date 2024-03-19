/* ex 3_4
  kt125 */

#include<stdio.h>

int main(void){
  int n;
  scanf("%d", &n);
  
  int count = 0;  
  for(int i = 0; i < 9; i++){  //二重ループで九九の値と一致するnがあるか調べる。
    for(int j = 0; j< 9; j++){
      if(n == (i+1) * (j+1)){  // i,j は0から8なので+1する。
        count++ ; break;
      }
    }
  }
  if (count == 0)  // if count == 0, print"No"
    printf("No\n");
  else
    printf("Yes\n");  // if count > 0, print"Yes"
  return 0;
}
    