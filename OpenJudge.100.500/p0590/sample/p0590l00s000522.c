#include <stdio.h>
#include <string.h>
 
int main(void){
  int a,b,c,d,e,k;
  int da = 0;
  
  scanf("%d",&a);
  scanf("%d",&b);
  scanf("%d",&c);
  scanf("%d",&d);
  scanf("%d",&e);
  scanf("%d",&k);
  da=e-a;

  if(da>k){
	printf(":(");
	//printf(“No”);
  }else if(da<=k){
	//printf(“Yes”);
	printf("Yay!");
  }
 
  return 0;
}