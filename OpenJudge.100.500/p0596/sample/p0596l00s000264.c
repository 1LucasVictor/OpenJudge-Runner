#include <stdio.h>
#include <string.h>
int main(){
  
  char s[100000] = "";
  int max;
  int cnt = 0;
  int cnt_0 = 0;
  int cnt_1 = 0;
  
  scanf("%s", s);

  max = strlen(s);

  for(int i = 0; i < max; i++){
    if(s[i] == '0'){
      cnt_0++;
    }else if(s[i] == '1'){
      cnt_1++;
    }
  }

  if(cnt_0 >= cnt_1){
    printf("%d\n",  cnt_1 * 2);
  }else{
    printf("%d\n",  cnt_0 * 2);
  }
  
  
}
