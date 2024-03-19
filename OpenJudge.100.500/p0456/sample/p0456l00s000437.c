#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


int main() {
  //char s[200000], t[200000];
  char *s, *t;
  s = (char *)malloc(sizeof(char));
  t = (char * )malloc(sizeof(char));
  int count = 0;
  int i = 0;
  char buf1[200000],buf2[200000];
  fgets(buf1,sizeof(buf1),stdin);
  //printf("%s",buf);
  s = buf1;
  fgets(buf2,sizeof(buf2),stdin);
  //printf("%s",buf2);
  t = buf2;
  //printf("%d",(int)strlen(t));
  //for(i = 0; i < sizeof(s); i++) printf("%c", *(s+i));
  while(i < strlen(s)) {
    if(*(s+i) != *(t+i)) count++;
    i++;
  }
  printf("%d",count);
}
