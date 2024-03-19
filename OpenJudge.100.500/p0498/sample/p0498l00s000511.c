#include<stdio.h>

int main(void)
{
  int page, paper;
	
  scanf("%d",&page);
  
  if(page % 2){
    paper = (page / 2) + 1;
  } else{
    paper = page / 2;
  }
  
  printf("%d\n",paper);
  
  return 0;
}