#include <stdio.h>

int main(){
  char line[100];
  int a, b, c;
  fgets(line, sizeof(line), stdin);
  sscanf(line, "%d %d %d", &a, &b, &c);
  if((a<b)&&(b<c))
	printf("Yes\n");
  else
	printf("No\n");
  return 0;
}

