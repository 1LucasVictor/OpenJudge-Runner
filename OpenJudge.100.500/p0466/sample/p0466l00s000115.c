#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
  char S[10];
  char T[11];
  scanf("%s", S);
  scanf("%s", T);
  
  int diff_one_flag = 0; //一文字違いフラグ
   if(strlen(T) == (strlen(S) + 1)){
    for(int i=0; i<strlen(S); i++){
      if(S[i] != T[i]){
        diff_one_flag = 1;
      }
    }
   }
     
   	if(diff_one_flag == 0){
     	printf("Yes");
   	}else{
     	printf("No");
   	} 
}