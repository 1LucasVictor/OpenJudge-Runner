#include<stdio.h>
#include<string.h>
int main(void)
{
    int H;
  	int A;
  	int count=0;
    // 整数の入力
    scanf("%d %d\n",&H,&A);
   	while(H>0){
    	H=H-A;
      	count++;
    }
      printf("%d\n",count);
  
    return 0;
}