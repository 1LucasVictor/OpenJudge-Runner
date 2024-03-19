#include <stdio.h>

main(){
  char str[22];
  int i, p;

  for(i=0;i<20;i++){
    scanf("%c", &str[i]);
    if(str[i]=='\n'){
      p=i;
      break;
    }
  }

  for(i=p-1;i>=0;i--){
    printf("%c", str[i]);
  }
  printf("\n");
  return 0;
}