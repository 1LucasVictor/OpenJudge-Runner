#include <stdio.h>

int main(){

  int d[64];
  int i=0;
  char tmp[32];
  int buf;
  while(fgets(tmp, 32, stdin)!=NULL){
	sscanf(tmp, "%d", &buf);
	if(buf > 0){
	  d[i]=buf;
	  i++;
	}else{
	  i--;
	  printf("%d\n",d[i]);
	}
  }
  return 0;
}
	  