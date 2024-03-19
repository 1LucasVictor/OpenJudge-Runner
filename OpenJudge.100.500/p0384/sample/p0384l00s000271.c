#include <stdio.h>
#include <ctype.h>

int main(void){
  char a[1200];
  int i;

  for(i=0;;i++){
    scanf("%c",&a[i]);

    if(isalpha(a[i])){
      if(isupper(a[i])){
	a[i]=tolower(a[i]);
      }else{
	a[i]=toupper(a[i]);
      }
    }
  
    printf("%c",a[i]);

    if(a[i]=='\n'){
      break;
    }

  }

  return 0;
}