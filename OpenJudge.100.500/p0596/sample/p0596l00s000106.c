#include<stdio.h>
#include<string.h>
int main(void){
  char s[100001];
  scanf("%s", s);
  
  int len;
  len = strlen(s);
  
  int i, j;
  int cnt = 0;
  for(i = 0;i < len - 1; i++){
    if((s[i] == '0' && s[i + 1] == '1') || (s[i] == '1' && s[i + 1] == '0')){
      cnt++;
      if(s + i + 2 != '\0'){
        strcpy(s + i, s + i + 2);
      }
      else{
        s[i] = '\0';
      }
      if(i != 0){
        i -= 2;
      }
      else{
        i--;
      }
      len -= 2;
    }
  }
  
  printf("%d\n", cnt * 2);
  return 0;
}