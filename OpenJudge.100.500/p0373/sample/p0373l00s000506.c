#include<stdio.h>
int main(){
  int high[100];
  int width[100];
  int i;
  int j;
  int count=0;
  int z;

  
  while(1){
  scanf("%d %d",&high[count],&width[count]);
  if(high[count] == 0 && width[count]==0) break;
  count++;
  }

  for(z=0;z<count;z++){
    for(i=0;i<high[z];i++){
      for(j=0;j<width[z];j++){
	if(i==0 || i==high[z]-1){
	printf("#");
	}
	else if(j==0 || j==width[z]-1){
	  printf("#");
	}
	else printf(".");
      }
      printf("\n");
    }
    printf("\n");
  }
  return 0;
}

