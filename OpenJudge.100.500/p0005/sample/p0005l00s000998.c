#include <stdio.h>

main(){
  char str[2000];
  int i, p;

  for(i=1;;i++){
    scanf("%c", &str[i]);
    if(str[i]=='\n'){
      p=i;
      break;
    }
  }
  if(p!=0){
    for(i=p-1;i>=1;i--){
      printf("%c", str[i]);
    }
  }
  printf("\n");
  return 0;
}