#include <string.h>
#include <stdio.h>
int main (){
  int strLen,i;
  char p1[11];
  char p2[11];
  scanf("%s",p1);
  scanf("%s",p2);
  strLen = (int)strlen(p1);
  if(strcmp(p1,p2) == 0){
	printf("No");
    return 0;
  }
  for(i = 0;i < strLen;i++){
	if(p1[i] != p2[i]){
      printf("No");
      return 0;
    }
  }
  printf("Yes");
  return 0;
}