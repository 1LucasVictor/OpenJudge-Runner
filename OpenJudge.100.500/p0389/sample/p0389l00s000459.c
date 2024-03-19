#include <stdio.h>
#include <string.h>
int main(void){
  char w[410],c[210];
  int m,h,l;
  while(1){
    scanf("%s",w);
    if(strcmp(w,"-")==0)
      break;
    l=strlen(w);
    scanf("%d",&m);
    while(m--){
      scanf("%d",&h);
      strcat(w,w);
      memset(c,0,sizeof(c));
      strncpy(c,w+h,l);
      memset(w,0,sizeof(w));
      strncpy(w,c,l);
    }
    printf("%s\n",w);
  } 
  return 0;
}