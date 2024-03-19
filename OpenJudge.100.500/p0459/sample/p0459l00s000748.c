#include <stdio.h>

int main(void)
{
	int data1,data2;
  	int c;
  	int i;
	scanf("%d%d",&data1,&data2);	/* 入力部分 */
  	
  	for(i = 0;i < data1;i++){
    if(data2 == (data1 * 2) + (i * 2)){
      c = 1;
    }
    }
  if(c == 1){
	printf("Yes");}
  else printf("No");
  
	return 0;
}