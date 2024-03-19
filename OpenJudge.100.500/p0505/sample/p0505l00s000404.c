#include<stdio.h>
#include<string.h>

int main(void)
{
    int H;
  	int N;
  	int count=0;
  	int i=0;
    // 整数の入力
    scanf("%d %d\n",&H,&N);
  	int A[N];
  	for(i=0;i<N;i++){
      	scanf("%d\n",&A[i]);
    }
   	for(i=0;i<N;i++){
    	H=H-A[i];
    }
  	if(H>0)
      printf("No\n");
	else if(H<=0)
      printf("Yes\n");
    return 0;
}