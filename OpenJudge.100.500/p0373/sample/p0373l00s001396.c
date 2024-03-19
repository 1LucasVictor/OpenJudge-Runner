#include<stdio.h>
int main()
{
  int h,w,x,y,a,b;

while(1){scanf("%d%d",&h,&w);
  for(a=0;a<w;a++){printf("#");}
  printf("\n");
    if(h==0&&w==0)break;
      for(x=0;x<h-2;x++){
      for(y=1;y<=w;y++){
	if(y!=1&&y!=w){
	printf(".");
	}else {
	  printf("#");}
      }

      printf("\n");}
for(a=0;a<w;a++){printf("#");}

      printf("\n\n");
    

    }  
      return 0;
  }