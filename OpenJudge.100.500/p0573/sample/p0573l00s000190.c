#include <stdio.h>
#include <stdlib.h>
#define max(a, b) ((a) > (b) ? (a) : (b))
#define min(a, b) ((a) > (b) ? (b) : (a))

int asc(const void *a, const void *b){
  return *(int *)a - *(int *)b;
}

int
main(int argc, char *argv[])
{
  char s[5];
  scanf("%s", s);

  int c[10000] = {};
  
  for(int i = 0; i < 4; i++){
    c[s[i]]++;
  }
  int cnt = 0;
  for(int i = 'A'; i <= 'Z'; i++){
    if(c[i] > 0) cnt++;
  }

  if(cnt == 2) printf("Yes\n");
  else printf("No\n");

  return 0;
}
	  
