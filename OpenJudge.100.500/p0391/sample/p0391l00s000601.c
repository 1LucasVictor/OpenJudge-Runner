#include <stdio.h>
#include <string.h>

int main(void){

  char str[1000];
  char strc[1000];
  char p[1000];
  char ord[7];
  int q, a, b, i, ii, x, y;

  scanf("%s", str);
  scanf("%d", &q);
  y = strlen(str);

  for(i = 0; i < q; i++){
    scanf("%s", ord);
    if(!strcmp(ord,"print")){
      scanf("%d%d", &a, &b);
      x = b - a + 1;
      for(ii = 0; ii < x; ii++){
	printf("%c",str[a+ii]);
      }
      printf("\n");
    }
    else if(!strcmp(ord,"reverse")){
      scanf("%d%d", &a, &b);
      x = b - a + 1;
      strcpy(strc, str);
      for(ii = 0; ii < x; ii++){
	str[a+ii] = strc[b-ii];
      }
    }
    else if(!strcmp(ord,"replace")){
      scanf("%d%d%s", &a, &b, p);
      x = b - a + 1;
      for(ii = 0; ii < x; ii++){
	str[a+ii] = p[ii];
      }
    }
  }
  return 0;
}