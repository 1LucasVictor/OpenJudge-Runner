#include <stdio.h>
#include <string.h>

int main(){
  int i, n, flag1[12], flag2[12];
  char infi[12], str[12], dic[1000000];

  scanf("%d",&n);
  for(i = 0; i < n; i++){
    scanf("%s%s",infi,str);
    if(infi[0] == 'i') strcat(dic,str);
    else if(infi[0] == 'f'){
      if(strstr(dic,str)) printf("yes\n");
      else printf("no\n");
    }
  }
 
  return 0;
}