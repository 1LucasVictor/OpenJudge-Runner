#include <stdio.h>

int main(int argc,char* argv[]){
  int i,j,k,l;
  int count,num;

  while(scanf("%d",&num) != EOF){
    count = 0;

    for(i = 0;i < 10;i++){
      for(j = 0;j < 10;j++){
	for(k = 0;k < 10;k++){
	  for(l = 0;l < 10;l++){
	    if((i+j+k+l) == num){count++;}
	  }
	}
      }
    }

    printf("%d\n",count);
    
  }
  
  return 0;  
}