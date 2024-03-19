//atcoder clange
#include <stdio.h>

int main(void){
 
    char str[4];
    int i=0;
  
    scanf("%s", str);//文字列取得
  
  for(i=0;i<3;i++){
		if(str[i] == str[i+1]){
         printf("Bad");
          return 0;
        }
  }
  
  printf("Good");
  
    return 0;
}