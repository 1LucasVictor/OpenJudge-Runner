#include <stdio.h>

int main(){
  char line[10000];
  int num;
  fgets(line, sizeof(line), stdin);
  sscanf(line, "%d", &num);
  int list[num];
  int i;
  for(i=0; i<num; ++i){
	scanf("%d", &list[i]);	
}
  for(i=(num-1); i>=0; --i){
	printf("%d", list[i]);
	if(i==0);
	else 
	  printf(" ");
}
  printf("\n");
  return 0;
}

