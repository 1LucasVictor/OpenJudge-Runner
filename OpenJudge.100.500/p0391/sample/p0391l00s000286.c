#include<stdio.h>

int main(){
  char t, s[1001], com[8], rep[1001];
  int p, a, b;
  scanf("%s\n%d", s, &p);

  for (int i = 0; i < p; i++) {
	  scanf("%s%d%d", com, &a, &b);
  	  if(com[0] == 'p'){
	    for (int i = a; i <= b; i++) printf("%c", s[i]);
		printf("\n");
	  }
	  else if (com[2] == 'p'){
		scanf("%s", rep);
	  	for (int i = a, j = 0; i <= b; i++, j++) s[i] = rep[j];
	  }
	  else
	  {
		  for ( ; a < b; a++, b--) {
		  t = s[a]; s[a] = s[b]; s[b] = t;
		  }
	  }
  }
  return 0;
}

