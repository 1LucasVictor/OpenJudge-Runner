#include <stdio.h>

int main(void){
  int i,j,num,check=0;
  int buf[200000]={0},ans[20000]={0};
  scanf("%d",&num);
  for(i=0;i<num-1;i++){
	scanf("%d",&buf[i]);
	ans[buf[i]]+=1;
  }
  for(i=1;i<=num;i++)
  printf("%d\n",ans[i]);
 
  return 0;
}
