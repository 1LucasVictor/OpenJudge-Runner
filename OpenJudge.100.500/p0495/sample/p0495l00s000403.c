#include <stdio.h>
#include <string.h>

int main(void) {
  char s[3];
  int a=0,b=0,i;
  for(i=0;i<3;i++){
  scanf("%c",&s[i]);
    if(s[i]=='A'){
      a++;
    }
    else if(s[i]=='B'){
      b++;
    }
  }
  if(a&&b){
    printf("Yes");
  }
  else printf("No");

}