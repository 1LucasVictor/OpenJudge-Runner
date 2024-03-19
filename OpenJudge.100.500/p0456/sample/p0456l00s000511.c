#include<stdio.h>
#include <string.h>

int main(void){
  int limit = 200000;
  char str1[limit];
  char str2[limit];
  scanf("%s", str1);
  scanf("%s", str2);

  int i;
  int count = 0;
  int length = strlen(str1);
  int lengthTrue = strlen(str2);

  if(length == lengthTrue){
  for(i = 0; i < length; i++){
    if(str1[i] != str2[i]){
      count++;
    }
  }

  printf("%d\n",count);
}
}

