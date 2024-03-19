#include <stdio.h>
#include <string.h>
 
int main(void){
 
  char card[400];
  char copy[200];
  int m;
  int h;
  register int i;
 
  while(scanf("%s",card)){
    if(card[0] == '-'){
      break;
    }
    scanf("%d",&m);
    for(i = 0;i < m;i ++){
      scanf("%d",&h);
      strcpy(copy,card);
      strcpy(card,copy + h);
      copy[h] = '\0';
      strcat(card,copy);
    }
    printf("%s\n",card);
  }
  return 0;
}