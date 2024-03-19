#include <stdio.h>

char toUPPER(char c);
char toLOWER(char c);

int main(void){
  char text[1200];
  scanf("%[^\n]", text);
  for(int i=0; text[i] != '\0'; i++){
    if (text[i] >= 'a' && text[i] <= 'z') text[i] = toUPPER(text[i]);
    else if (text[i] >= 'A' && text[i] <= 'Z') text[i] = toLOWER(text[i]);
  }
  printf("%s\n", text);
  return 0;
}


char toUPPER(char c){
  if (c >= 'a' && c <= 'z'){
    return (c - 0x20);
  }else{
    return c;
  }
}

char toLOWER(char c){
  if (c >= 'A' && c <= 'Z'){
    return (c + 0x20);
  }else{
    return c;
  }
}

