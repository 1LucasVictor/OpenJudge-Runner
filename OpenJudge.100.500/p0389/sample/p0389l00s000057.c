#include<stdio.h>
#include<string.h>
 
int main(int argc, char* argv[])
{
  char s[400];
  int h, i, j, k,len;
 
  scanf("%s", s);
  while(strcmp(s, "-")){
	scanf("%d", &h);
    i = 0;
    len = strlen(s);
    for(j = 0; j < h; j++){
      scanf("%d", &k);
      i = (i + k) % len;
    }
    j = i;
    do{
      putchar(s[i]);
      i = (i + 1) % len;
    }while(j != i);
    putchar('\n');
    scanf("%s", s);
  }

  return(0);
}