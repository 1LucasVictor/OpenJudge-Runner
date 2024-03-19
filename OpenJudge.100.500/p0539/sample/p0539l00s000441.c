#include<stdio.h>
 
int main(void){
  int a=0;
  scanf("%d",&a);
  int j=0;
  for(int i=1;i<=9;i++){
    if(a%i==0){
		if(a/i>=1){
			if(a/i<=9)
				j++;
		}
      }
    }

  if(j>=0)
    printf("Yes");
  else
    printf("No");
  return 0;
}