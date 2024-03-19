#include <stdio.h>
int main(){
  int a,i,j,flag=0;
  scanf("%d",&a);
  for(i=1;i<=9;i++){
  	for(j=1;j<=9;j++){
    	if(i*j==a)flag=1;
    }
  }
  if(flag==0)printf("No\n");
  else printf("Yes\n");
}