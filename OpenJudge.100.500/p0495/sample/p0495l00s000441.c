#include <stdio.h>
#include <string.h>
int main(){
  char s[3];
  scanf("%s",s);
    if(s=="ABB" ||"BAA"||"AAB"||"BBA"||"ABA"|| "BAB"){
      printf("Yes");
    }
    else{
      printf("No");  
  }
  return 0;}