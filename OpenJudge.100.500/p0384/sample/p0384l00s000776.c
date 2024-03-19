#include <stdio.h>
#include <ctype.h>
#include <string.h>
//prototype
int main(void);

int main(void){

  int i;
  int str_count;
  char str[1200];

  fgets(str,sizeof(str), stdin); 

  str_count = strlen(str) + 1;

  for (i = 0; i < str_count; i++) {
    if (isupper(str[i]) != 0) {
    //Upper case
      str[i] = tolower(str[i]);
    } else {
    //Lower case
      str[i] = toupper(str[i]);
    }
  }

  //disp the string
  printf("%s", str);

  return 0;
}

