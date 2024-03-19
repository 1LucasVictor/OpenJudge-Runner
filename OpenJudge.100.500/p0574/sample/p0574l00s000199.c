#include <stdio.h>
int main (){
  char s[6];
  scanf ("%s", &s);
  int goo=0;
  for (int i=0; i<=2;i++){
    if (s[i] == s[i+1])  {
      printf("Bad");
      break;
    }
    else goo++;
  }
  
  if(goo == 3) printf("Good");
  
  return 0;
}