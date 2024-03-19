#include <stdio.h>
#include <string.h>

char *shuffle(char *s, int h){
  char t[201];
  strcpy(t, s);

  for(int i = 0; i < strlen(s) - 1; i++){
	s[i] = t[i + h];
  }

  for(int j = 0; j < h; j++){
	s[(strlen(t) - h) + j] = t[j];
  }

  return s;
}


int main(){

  char cards[201];
  int m, h;
  while(1){
	scanf("%s", cards);
	if(cards[0] == '-'){
	  break;
	}

	scanf("%d", &m);

	for(int i = 0; i < m; i++){
	  scanf("%d", &h);
	  shuffle(cards, h);
	}
	printf("%s\n", cards);
  }

  return 0;
}
