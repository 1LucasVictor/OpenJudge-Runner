#include<stdio.h>
#include<string.h>

int main(){
  char cards[201], shuffle[201];
  int m, h, len, i;
  while(1)
  {
	  scanf("%s", cards);
	  if(!strcmp(cards, "-")) break;
	  len = strlen(cards);
	  scanf("%d", &m);
	  for (i = 0; i < m; i++) {
	  	scanf("%d", &h);
		strncpy(shuffle, &cards[h], len-h);
		strncpy(&shuffle[len-h], cards, h);
		strcpy(cards, shuffle);
	  }
	  cards[len] = 0;
	  printf("%s\n", cards);
  }
  return 0;
}

