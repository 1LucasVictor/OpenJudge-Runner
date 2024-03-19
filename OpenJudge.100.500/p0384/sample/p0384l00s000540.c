#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void) {
  int i;
  char str1[1200],str2[1200];

  fgets(str2, sizeof(str2), stdin);

  for(i = 0; i < 1200; i++){
    str1[i] = tolower(str2[i]);
  }

  for(i = 0; i < 1200; i++){
    if(islower(str2[i]) != 0){
      str1[i] = toupper(str2[i]);
    }
  }

  int len = strlen(str2);
  for(i = 0; i < len; i++){
    printf("%c",str1[i]);
  }
  return 0;
}
