#include <stdio.h>

int main(){
  char line[100];
  int h, w;
  int i, j;
  while(1){
	fgets(line, sizeof(line), stdin);
	sscanf(line, "%d %d", &h, &w);
	if((h==0)&&(w==0))
	  break;
	for(i=0; i<h; ++i){
	  if((i==0)||(i==(h-1))){
		for(j=0; j<w; ++j){
		  printf("#");
		}
	  }else{
		for(j=0; j<w; ++j){
		  if((j==0)||(j==(w-1)))
			printf("#");
		  else
			printf(".");
		}
	  }
	  printf("\n");
	}
  }	
	return 0;
  }

