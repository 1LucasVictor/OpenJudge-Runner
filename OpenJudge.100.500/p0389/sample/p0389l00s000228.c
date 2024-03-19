#include<stdio.h>
#include<string.h>
 
int main(void){
  char str[201] = {};
  char tmp_str[201] = {};
  int shuff_count, shuff_num, length;
  
  while(1){
      scanf("%s %d", str, &shuff_count);
      if(strcmp(str, "-") == 0){
          break;
      }
      for(int i=0; i<shuff_count; i++){
          scanf("%d", &shuff_num);
          length = strlen(str);
          strcpy(tmp_str, str);
          strcpy(str, &tmp_str[shuff_num]);
          strncpy(str+(length-shuff_num), tmp_str, shuff_num);
      }
      printf("%s\n", str);
  }
  
  return 0;
}
