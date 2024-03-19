#include <stdio.h>
#include <stdbool.h>
int main(){
  char S[5];
  scanf("%s",S);
  bool p= false;
  for(int i = 0;i < 4;i++){
    for(int j = i;j < 4;j++){
    if(S[i] == S[j] && p == false){p =true;}
    }
  }
 p == true ? printf("Yes") : printf("No");
}