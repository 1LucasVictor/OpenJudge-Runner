#include <stdio.h>

int main(void)
{
	int data1,data2;
  	int c;
  	int i = 0;
	scanf("%d %d",&data1,&data2);	/* 入力部分 */
  	
  	while(i <= data1){
    if(data2 == (data1 + i) * 2){
      c = 1;
      break;
    }
      i++;
    }
  if(c){
	printf("Yes");}
  else printf("No");
  
	return 0;
}