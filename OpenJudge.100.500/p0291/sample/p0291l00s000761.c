#include <stdio.h>
#include <limits.h>
int main(){
  char line[100];
  int num;
  fgets(line, sizeof(line), stdin);
  sscanf(line, "%d", &num);
  int N[200000];
  int i, j;
  for(i=0; i<num; ++i){
	fgets(line, sizeof(line), stdin);
	sscanf(line, "%d", &N[i]);
  }
  int max=INT_MIN;
  int tmp;
  int min=N[0];
  for(i=1; i<num; ++i){
	tmp=N[i]-min;
	if(tmp>max)
	  max=tmp;
	if(N[i]<min)
	  min=N[i];
}
  printf("%d\n", max);
  return 0;
}

