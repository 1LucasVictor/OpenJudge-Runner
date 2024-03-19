#include <stdio.h>

int main(){
  char line[100];
  int a, b, c;
  fgets(line, sizeof(line), stdin);
  sscanf(line, "%d %d %d", &a, &b, &c);
  int i;
  int count;
  for(i=a; i<=b; ++i){
	if(c%i==0)
	  ++count;
}
  printf("%d\n", count);
  return 0;
}

