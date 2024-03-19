#include <stdio.h>
#include <string.h>
int main(){
  
  char s[100000] = "";
  int max;
  int cnt = 0;
  int i = 0;
  
  scanf("%s", s);

  max = strlen(s);

  do{ //1つ目からチェックする
    
    if((s[i] == '0') && (s[i + 1] == '1')){
      for(int n = i; n < max;){ //文字列並び替え
	s[i] = s[i + 2];
	s[i + 1] = s[i + 3];
	n = n + 2;
      }
      i = 0;
      max = max -2;
      cnt = cnt + 2;
    }else{
      i++;
    }
    
  }while(i < max);
  
  printf("%d\n",  cnt);
  
}
