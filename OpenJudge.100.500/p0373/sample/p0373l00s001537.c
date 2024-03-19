#include<stdio.h>
int main(){
  int x,y;
  while(1){
    scanf("%d %d",&x,&y);
    if(x==0&&y==0)break;
    for(int i=0;i<x;i++){
      for(int j=0;j<y;j++){
	if(0<i&&i<x-1&&j>0&&j<y-1){printf(".");}
	else printf("#");
	
	
      }
      printf("\n");
    }
    printf("\n");
  }
  return 0;
}

